#include <iostream>
#include "../presentacion/Login.h"
#include "../Logica/dominio/Usuario.h"



int main() {

    Login * log = new Login();
    log->pedirCredenciales();
    cout<<"hola";
    return 0;


}