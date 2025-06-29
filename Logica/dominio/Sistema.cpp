#include "Sistema.h"
#include "Usuario.h"
#include "Cliente.h"
#include "DTDomicilio.h"
#include "DTFecha.h"
#include "DTCliente.h"
#include "DTVendedor.h"
#include "Vendedor.h"
#include "../../ICollection/collections/OrderedDictionary.h"
#include "../../ICollection/String.h"
#include "Producto.h"


Sistema::Sistema() {

    this->usuarios = new OrderedDictionary();
    this->productos = new OrderedDictionary();
    this->promocion = new OrderedDictionary();

    Usuario * c = new Cliente("faxcundo", "fax", new DTFecha(13,07,2003), new DTDomicilio("Maldonado","Uruguay"));
    Usuario * v = new Vendedor("kevin","kev",new DTFecha(04,05,2001),2133668);
    this->usuarios->add(new String(c->getNick().c_str()),c);
    this->usuarios->add(new String(v->getNick().c_str()),v);
    Producto * p = new Producto("A27","Arroz",56,2,"Blanco",true, "ropa", dynamic_cast<Vendedor*>(v));
    this->productos->add(new String(p->getCodigo().c_str()),p);
}


Sistema::~Sistema() {
    // TODO Auto-generated destructor stubf
}

string Sistema::ingresar(string nick, string pass) {
    string mensajeRetorno = "*** Usuario o contrasenia incorrecto";
    IIterator * it = this->usuarios->getIterator();
    while(it->hasCurrent()) {
        ICollectible * c = it->getCurrent();
        Usuario* u = dynamic_cast<Usuario*>(c);
        if (u != nullptr && u->getNick() == nick) {
            cout << "encontre usuario " << endl;
            if (u->validarContrasenia(pass)) {
                mensajeRetorno = "*** Bienvenido";
                break;
            }
        }
        it->next();
    }
    return mensajeRetorno;
}

set<DTUsuario*> Sistema::listarUsuarios()
{

    set<DTUsuario*> resultado;
    IIterator * it = this->usuarios->getIterator();
    while(it->hasCurrent()){
        ICollectible * e = it->getCurrent();
        Usuario* u = dynamic_cast<Usuario*>(e);
        resultado.insert(u->getDT()); // Polimórfico: Cliente/Vendedor devuelven su propio DT
        it->next();
    }
    delete it;
    return resultado;

}

string Sistema::altaUsuario(DTUsuario * usu) {

    string resultado = "Usuario Ingresado Correctamente";
    IIterator * it = this->usuarios->getIterator();
    while(it->hasCurrent()) {
        ICollectible * c = it->getCurrent();
        Usuario* u = dynamic_cast<Usuario*>(c);
        if (u != nullptr && u->getNick() == usu->getNickDT()) {
            resultado = "Usuario ya existe";
            break;
        }
        it->next();
    }
    if (resultado != "Usuario ya existe") {
        if (DTCliente* dtc = dynamic_cast<DTCliente*>(usu))
        {

            Usuario * c = new Cliente( dtc->getNickDT(),dtc->getPass(),dtc->getFechaNacDT(),dtc->getDomicilio());
            this->usuarios->add(new String(usu->getNickDT().c_str()), c);

        }
        else if (DTVendedor * dtc = dynamic_cast<DTVendedor*>(usu))
        {

            Usuario * c = new Vendedor( dtc->getNickDT(),dtc->getPass(),dtc->getFechaNacDT(),dtc->getRUT());
            this->usuarios->add(new String(usu->getNickDT().c_str()), c);

        }
    }
    return resultado;

}

set<DTUsuario*> Sistema::listarVendedores()
{

    set<DTUsuario*> resultado;
    IIterator * it = this->usuarios->getIterator();
    while(it->hasCurrent()){
        ICollectible * e = it->getCurrent();
        Usuario* u = dynamic_cast<Vendedor*>(e);
        if (u != nullptr)
        {
            resultado.insert(u->getDT());
        }

        it->next();
    }
    delete it;
    return resultado;

}

string Sistema::altaProducto(DTProducto * p, string vendedor)
{
    string resultado = "Producto Ingresado Correctamente";

    // 1. Buscar el vendedor
    IIterator* it = this->usuarios->getIterator();
    Vendedor* vend = nullptr;

    while(it->hasCurrent()) {
        ICollectible* c = it->getCurrent();
        // Solo casteamos a Vendedor, ya que buscamos vendedor
        Vendedor* v = dynamic_cast<Vendedor*>(c);
        if (v != nullptr && v->getNick() == vendedor) {
            vend = v;
            break;
        }
        it->next();
    }
    delete it;

    if (vend == nullptr) {
        // Vendedor no encontrado, no podemos continuar
        return "Vendedor no encontrado";
    }

    // 2. Verificar que no exista producto con el mismo código
    it = this->productos->getIterator();
    while(it->hasCurrent()) {
        ICollectible* c = it->getCurrent();
        Producto* l = dynamic_cast<Producto*>(c);
        if (l != nullptr && l->getCodigo() == p->getCodigo()) {
            resultado = "Producto ya existe";
            break;
        }
        it->next();
    }
    delete it;

    // 3. Si producto no existe, crearlo y asociarlo al vendedor
    if (resultado != "Producto ya existe") {
        Producto* c = new Producto(p->getCodigo(), p->getNombre(), p->getPrecio(), p->getStock(), p->getDescripcion(), p->getDisponible(), p->getCategoria(), vend);
        this->productos->add(new String(p->getCodigo().c_str()), c);
        vend->agregarProducto(c);
    }

    return resultado;
}


set<DTProducto*> Sistema::listarProductos() {

    set<DTProducto*> resultado;
    IIterator * it = this->productos->getIterator();
    while(it->hasCurrent()){
        ICollectible * e = it->getCurrent();
        Producto * u = dynamic_cast<Producto*>(e);
        resultado.insert(u->getDT());
        it->next();
    }
    delete it;
    return resultado;


}

DTProducto* Sistema::seleccionarProducto(string codigo)
{
    String* clave = new String(codigo.c_str());
    Producto * p = dynamic_cast<Producto*>(this->productos->find(clave));
    if (p == nullptr)
    {
        cout<<"No se encontra el producto: "<<endl;
        return nullptr;
    }
    else
    {
        return p->getDT();;
    }



}


void Sistema::agregarProductoConVendedor(DTProducto* p, string nick) {
    String* clave = new String(nick.c_str());
    String* claveProd = new String(p->getCodigo().c_str());
    if (this->usuarios->member(clave)) {
        Vendedor* v = dynamic_cast<Vendedor*>(this->usuarios->find(clave));
        if (v != nullptr) {
            Producto * nuevo = dynamic_cast<Producto*>(this->productos->find(claveProd));
            v->agregarProducto(nuevo);
        }
    }
    delete claveProd;
    delete clave;
}

Usuario* Sistema::obtenerVendedor(string codigo) {
    String* clave = new String(codigo.c_str());
    Usuario * p = dynamic_cast<Vendedor*>(this->usuarios->find(clave));
    if (p == nullptr)
    {
        cout<<"No se encontra el Vendedor: "<<endl;
        return nullptr;
    }
    else
    {
        return p;
    }
}

set<DTUsuario*> Sistema::altaPromocion(DTPromocion * p) {

    set<DTUsuario*> resultado;

    Promocion * pro = new Promocion(p->getNombreDT(), p->getCodigoDT(), p->getVigente()); /*1*/
    this->promocion->add(new String(p->getNombreDT().c_str()), pro); /*2*/

    resultado = listarVendedores(); /*3*/
    /*Con que listarVendedores Muestre los vendedores en pantalla ya alcanza
     *El diagrama de comunicacion pide que devuelva un set<DTVendedor> pero es solo
     *para verlo, no lo usa, asi que con que muestre en pantalla alcanza
     */

    return resultado; /*4*/

}