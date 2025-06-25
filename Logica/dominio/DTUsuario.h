#ifndef DTUSUARIO_H
#define DTUSUARIO_H
#include"DTFecha.h"
#include <string>

#include "Usuario.h"
using namespace std;

class DTUsuario{
private:
    string nickDT;
    DTFecha * fechanacDT;

public:
    DTUsuario();
    ~DTUsuario();
    void setnickDT(string nickDT);
    void setFechaNacDT(DTFecha * fechanacDT);


};



#endif //DTUSUARIO_H
