//
// Created by kevin on 28/6/2025.
//
#include <limits>
#include "PUsuario.h"
#include <iostream>
#include <string>
#include "../Logica/controlador/SistemaControlador.h"
#include "../Logica/interfaceSistema/ISistema.h"
#include "../Logica/dominio/DTCliente.h"
#include "../Logica/dominio/DTVendedor.h"


PUsuario::PUsuario(ISistema* isistema) {
    this->isistema = isistema;
}

PUsuario::~PUsuario() {

}

void PUsuario::listarUsuarios()
{

    set<DTUsuario*> usuarios = this->isistema->listarUsuarios();

    for (DTUsuario* dt : usuarios) {
        cout << *dt << endl;
    }

}

void PUsuario::altaUsuario() {
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