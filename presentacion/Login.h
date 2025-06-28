#ifndef PRESENTACION_LOGIN_H_
#define PRESENTACION_LOGIN_H_
#include "ISistema.h"

class Login {
private:
    ISistema* isistema;
public:
    Login(ISistema* isistema);
    virtual ~Login();
    void pedirCredenciales();

};
#endif /* PRESENTACION_LOGIN_H_ */