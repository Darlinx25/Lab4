#ifndef PRESENTACION_LOGIN_H_
#define PRESENTACION_LOGIN_H_
class Login {
public:
    Login();
    virtual ~Login();
    void pedirCredenciales();
    void listarUsuarios();
};
#endif /* PRESENTACION_LOGIN_H_ */