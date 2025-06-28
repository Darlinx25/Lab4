#ifndef DTUSUARIO_H
#define DTUSUARIO_H
#include"DTFecha.h"
#include <string>

#include "Usuario.h"
using namespace std;

class DTUsuario : public ICollectible{
protected:
    string nickDT;
    string pass;
    DTFecha * fechanacDT;

public:
    DTUsuario();
    DTUsuario(string nick, string pass, DTFecha * fechanacDT);
    virtual ~DTUsuario()=0;
    void setnickDT(string nickDT);
    void setFechaNacDT(DTFecha * fechanacDT);
    string getNickDT();
    string getPass();
    DTFecha* getFechaNacDT();



};

std::ostream& operator<<(std::ostream& os, DTUsuario& u);

#endif //DTUSUARIO_H
