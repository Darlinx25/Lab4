#include "Usuario.h"
#include <iostream>

using namespace std;
Usuario::Usuario() {


}

Usuario::~Usuario() {


    // TODO Auto-generated destructor stub


}

string Usuario::getNick() {


    return this->nick;


}

bool Usuario::validarContrasenia(string pass) {


    if (this->pass == pass) {


        cout << "pass correcta" << endl;


        return true;
    } else  {


        cout << "pass incorrecta" << endl;


        return false;
    }



}


bool Usuario::estaBloqueado() {


    if (this->intentosError > 3) return true;


    else return false;


}


void Usuario::setnick(string nick) {
    this->nick = nick;
}
void Usuario::setpass(string pass) {
    this->pass = pass;
}
void Usuario::setFechaNac(DTFecha * fechaNac) {
    this->fechaNac = fechaNac;
}



