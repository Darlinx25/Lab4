#ifndef LOGICA_USUARIO_H_
#define LOGICA_USUARIO_H_
#include <iostream>
#include <set>
using namespace std;
#include "DTFecha.h"
#include "../../ICollection/interfaces/ICollectible.h"
using namespace std;
class DTUsuario;
class Usuario:public ICollectible{
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
    virtual DTUsuario * getDT()=0;




};
#endif /* LOGICA_USUARIO_H_ */