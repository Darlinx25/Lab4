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


Sistema::Sistema() {

    this->usuarios = new OrderedDictionary();
    Usuario * c = new Cliente("faxcundo", "fax", new DTFecha(13,07,2003), new DTDomicilio("Maldonado","Uruguay"));
    Usuario * v = new Vendedor("kevin","kev",new DTFecha(04,05,2001),2133668);
    this->usuarios->add(new String(c->getNick().c_str()),c);
    this->usuarios->add(new String(v->getNick().c_str()),v);
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