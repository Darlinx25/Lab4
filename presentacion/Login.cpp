#include "Login.h"
#include <iostream>
#include <string>
#include "../Logica/interfaceSistema/ISistema.h"
using namespace std;

Login::Login(ISistema* isistema) {
    // TODO Auto-generated constructor stub
    this->isistema = isistema;
}
Login::~Login() {
    //TODO Auto-generated destructor stub
}
void Login::pedirCredenciales() {
    //notese que si bien estamos usando la interface ISistema,
    //estamos haciendo un new de su implementacioón
    //por lo tanto el desacoplamiento que tenemos es un bajo
    //mojoraremos esto utilizando el patrón Factory en futuras versiones



    string nick, pass;
    cout << " ** Login ** " << endl;
    cout << "Ingrese nick: ";
    cin >> nick;
    cout << endl;
    cout << "Ingrese pass: ";
    cin >> pass;
    cout << this->isistema->ingresar(nick, pass);

}


