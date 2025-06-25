#include <iostream>
#include "../presentacion/Login.h"
#include "../Logica/dominio/Usuario.h"
#include "../menu/menu.h"
#include "../Logica/dominio/Usuario.h"
#include "../Logica/dominio/Sistema.h"
#include "../Logica/dominio/Cliente.h"



int main() {

    list<DTUsuario> usuarioss;
    Login * log = new Login();
    log->pedirCredenciales();
    log->listarUsuarios();
    Menu();

    //VER SI EL LISTAR USUARIO LO PODEMOS HACER SOBRECARGANDO EL OPERADOR COUT O COMO
    return 0;


}