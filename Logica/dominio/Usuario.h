#ifndef LOGICA_USUARIO_H_
#define LOGICA_USUARIO_H_
#include <iostream>
#include "DTFecha.h"
using namespace std;

class Usuario {
    protected:
    string nick;
    string pass;
    DTFecha * fechaNac;
    int intentosError;

public:
    Usuario();
    virtual ~Usuario();
    string getNick();
    bool validarContrasenia(string pass);
    bool estaBloqueado();
    DTFecha getFechaNac();
    void setnick(string nick);
    void setpass(string pass);
    void setFechaNac(DTFecha * fechaNac);


};
#endif /* LOGICA_USUARIO_H_ */