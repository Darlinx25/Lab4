#ifndef DTUSUARIO_H
#define DTUSUARIO_H
#include"DTFecha.h"
#include <string>

#include "Usuario.h"
using namespace std;

class DTUsuario{
protected:
    string nickDT;
    DTFecha * fechanacDT;

public:
    DTUsuario();
    virtual ~DTUsuario()=0;
    void setnickDT(string nickDT);
    void setFechaNacDT(DTFecha * fechanacDT);
    string getNickDT();
    DTFecha* getFechaNacDT();



};

std::ostream& operator<<(std::ostream& os, DTUsuario& u);

#endif //DTUSUARIO_H
