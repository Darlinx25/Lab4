#include <iostream>
#include "../presentacion/Login.h"
#include "../Logica/dominio/Usuario.h"
#include "../menu/menu.h"



int main() {


    Login * log = new Login();
    log->pedirCredenciales();
    Menu();
    return 0;


}