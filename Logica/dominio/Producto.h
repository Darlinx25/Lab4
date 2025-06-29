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
    Categoria categoria;
    Usuario* vendedor;


public:
    Producto(string codigo,string nombre,float precio,int stock,string descripcin ,bool disponible ,Categoria cat,Usuario * v);
    ~Producto();
    DTProducto * getDT();
    string getCodigo();



};



#endif //PRODUCTO_H
