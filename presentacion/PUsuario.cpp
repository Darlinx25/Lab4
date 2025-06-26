//
// Created by Chorizo-Cosmico on 26/06/2025.
//

#include "PUsuario.h"

#include "DTCliente.h"
#include "DTVendedor.h"
#include "ISistema.h"
#include "../Logica/controlador/SistemaControlador.h"
#include "../Logica/interfaceSistema/ISistema.h"

void PUsuario::altaUsuario() {
    ISistema * controlador = new SistemaControlador();
    DTUsuario* usuario;
    cout<<"Ingrese el nick"<<endl;
    string nick;
    cin>>nick;

    cout<<"Ingrese el password"<<endl;
    string pass;
    cin>>pass;

    cout<<"Ingrese la fecha de nacimiento"<<endl;
    cout<<"Ingrese el dia"<<endl;
    int dia;
    cin>>dia;

    cout<<"Ingrese el mes"<<endl;
    int mes;
    cin>>mes;

    cout<<"Ingrese el anio"<<endl;
    int anio;
    cin>>anio;

    DTFecha * f = new DTFecha(dia, mes, anio);


    cout<<"Que tipo de usuario va a ingresar:"<<endl;
    cout<<"1) Cliente"<<endl;
    cout<<"2) Vendedor"<<endl;
    int tipoUsu;
    cin>>tipoUsu;

    if (tipoUsu == 1) {

        cout<<"Ingrese la dirección de residencia"<<endl;
        string direccion;
        cin>>direccion;

        cout<<"Ingrese la ciudad de residencia"<<endl;
        string ciudad;
        cin>>ciudad;

        DTDomicilio * d = new DTDomicilio(direccion, ciudad);

        usuario = new DTCliente(nick, f, d);

    }else if (tipoUsu == 2) {

        cout<<"Ingrese el RUT"<<endl;
        int rut;
        cin>>rut;
        usuario = new DTVendedor(nick, f, rut);
    }

    string res = controlador->altaUsuario(usuario);

    cout<<res<<endl;

}
