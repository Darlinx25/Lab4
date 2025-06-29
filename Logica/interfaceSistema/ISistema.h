#ifndef LOGICA_ILOGIN_H_
#define LOGICA_ILOGIN_H_
#include <iostream>
#include <set>
#include <string>
#include "DTUsuario.h"
#include "DTProducto.h"
#include "DTProducto.h"
using namespace std;
//Interface del Sistema
//Como este ejemplo es muy sencillo, solo tengo una interface del sistema
class ISistema {
public:
    virtual string ingresar(string nick, string pass)=0;
    virtual set<DTUsuario*> listarUsuarios()=0;
    virtual string altaUsuario(DTUsuario * usu)=0;
    virtual set<DTUsuario*>  listarVendedores()=0;
    virtual string altaProducto(DTProducto * p,string vendedor)=0;
    virtual set<DTProducto*> listarProductos()=0;

};
#endif /* LOGICA_ILOGIN_H_ */