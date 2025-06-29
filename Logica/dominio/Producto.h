#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include "DTCategoria.h"
#include "DTProducto.h"
#include "Vendedor.h"
#include "../../ICollection/interfaces/ICollectible.h"
using namespace std;
class DTProducto;

class Producto:public ICollectible{
private:
    string codigo;
    string nombre;
    float precio;
    int stock;
    string descripcion;
    bool disponible;
    Usuario * vendedor;
    string categoria;


public:
    Producto(string codigo,string nombre,float precio,int stock,string descripcin ,bool disponible , string categoria, Usuario * v);
    ~Producto();
    DTProducto * getDT();
    string getCodigo();
    string getCategoria();



};



#endif //PRODUCTO_H
