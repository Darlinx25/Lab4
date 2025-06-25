#include "Sistema.h"





#include  "Usuario.h"
#include "Cliente.h"
#include "DTDomicilio.h"
#include "DTFecha.h"
#include "../../ICollection/collections/OrderedDictionary.h"
#include "../../ICollection/String.h"


Sistema::Sistema() {

    this->usuarios = new OrderedDictionary();
    Usuario * c = new Cliente("faxcundo", "fax", new DTFecha(13,07,2003), new DTDomicilio("Maldonado","Uruguay"));
//// Vendedor(string nick, string pass, DTFecha * fechaNac, int RUT);
    //usuarios.push_back(c);
    //usuarios.push_back(new Usuario("pepe","111"));
    //usuarios.push_back(new Usuario("luis","222"));
    //usuarios.push_back(new Usuario("faxcundo","fax"));

    this->usuarios->add(new String(c->getNick().c_str()),c);
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
    return resultado;

}