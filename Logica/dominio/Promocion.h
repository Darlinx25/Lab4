#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include "DTCategoria.h"
#include "Usuario.h"
#include "DTUsuario.h"
#include "../../ICollection/interfaces/IDictionary.h"
#include "DTProducto.h"
#include <string>
#include "Requiere.h"
#include <list>
using namespace std;

class Producto: public ICollectible {
private:
    string nombreProm;
    string codigoProm;
    bool vigenteProm;
    list<Requiere *> requiere;

public:



};



#endif //PRODUCTO_H
