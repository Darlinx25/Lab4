#include<iostream>

#include "PProducto.h"
#include "PUsuario.h"
#include "SistemaControlador.h"
#include "../presentacion/Login.h"
#include <limits>
using namespace std;

void Menu()
{
    int option=0;
    ISistema* isistema = new SistemaControlador();
    Login * log = new Login(isistema);
    PUsuario * usuario= new PUsuario(isistema);
    log->pedirCredenciales();
    PProducto* producto= new PProducto(isistema);

    while(option!=12)
    {

        cout<<endl;
        cout<<"1)Alta Usuario"<<endl;
        cout<<"2)Listado de usuarios"<<endl;
        cout<<"3)Alta de producto"<<endl;
        cout<<"4)Consultar producto"<<endl;
        cout<<"5)Crear promoción"<<endl;
        cout<<"6)Consultar promoción"<<endl;
        cout<<"7)Realizar compra"<<endl;
        cout<<"8)Dejar comentario"<<endl;
        cout<<"9)Eliminar comentario"<<endl;
        cout<<"10)Enviar producto"<<endl;
        cout<<"11)Expediente de Usuario"<<endl;
        cout<<"12) Salir"<<endl;
        cin>>option;
        switch(option)
        {
        case 1:

            usuario->altaUsuario();

            break;
        case 2:
            usuario->listarUsuarios();
            break;

        case 3:
            producto->altaProduto();
                cout<<endl<<"Todos los productos en el sistema: "<<endl;
            producto->listarProductos();

            break;
        }
    }

}
