#include "Login.h"
#include <iostream>
#include <string>
#include "../Logica/controlador/SistemaControlador.h"
#include "../Logica/interfaceSistema/ISistema.h"
#include "../Logica/dominio/DTCliente.h"
#include "../Logica/dominio/DTVendedor.h"
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

void Login::listarUsuarios()
{

    set<DTUsuario*> usuarios = this->isistema->listarUsuarios();

    for (DTUsuario* dt : usuarios) {
        cout << *dt << endl;
    }

}

#include <limits> // al inicio del archivo si no está

void Login::altaUsuario() {
    DTUsuario* usuario;
    cout << "Ingrese el nick" << endl;
    string nick;
    cin >> nick;

    cout << "Ingrese el password" << endl;
    string pass;
    cin >> pass;

    cout << "Ingrese la fecha de nacimiento" << endl;
    cout << "Ingrese el dia" << endl;
    int dia;
    cin >> dia;

    cout << "Ingrese el mes" << endl;
    int mes;
    cin >> mes;

    cout << "Ingrese el anio" << endl;
    int anio;
    cin >> anio;

    cout << "Que tipo de usuario va a ingresar:" << endl;
    cout << "1) Cliente" << endl;
    cout << "2) Vendedor" << endl;
    int tipoUsu;
    cin >> tipoUsu;

    // Limpiar el buffer antes de leer strings largos o con espacios
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (tipoUsu == 1) {
        cout << "Ingrese la dirección de residencia" << endl;
        string direccion;
        getline(cin, direccion); // permite ingresar espacios

        cout << "Ingrese la ciudad de residencia" << endl;
        string ciudad;
        getline(cin, ciudad);

        usuario = new DTCliente(nick, new DTFecha(dia, mes, anio), new DTDomicilio(direccion, ciudad));

    } else if (tipoUsu == 2) {
        cout << "Ingrese el RUT" << endl;
        int rut;
        cin >> rut;
        usuario = new DTVendedor(nick, new DTFecha(dia, mes, anio), rut);
    }

    string res = this->isistema->altaUsuario(usuario);
    cout << res << endl;
}

