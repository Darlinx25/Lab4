#include<iostream>

#include "../presentacion/PUsuario.h"
#include "../presentacion/Login.h"
using namespace std;

void Menu()
{
    int option=0;
    Login * log = new Login();
    PUsuario * usu = new PUsuario();
    log->pedirCredenciales();

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

            usu->altaUsuario();

            break;
        case 2:
            log->listarUsuarios();
            break;

        }
    }

}
