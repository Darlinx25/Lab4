#ifndef LOGICA_SISTEMA_H_
#define LOGICA_SISTEMA_H_
#include "Usuario.h"
#include "DTUsuario.h"
#include  "DTPromocion.h"
#include "../../ICollection/interfaces/IDictionary.h"
#include "DTProducto.h"
#include <string>

using namespace std;
class Sistema {
private:

    IDictionary * usuarios;
    IDictionary * productos;
    IDictionary * promocion;
public:
    Sistema();
    virtual ~Sistema();
    string ingresar(string nick, string pass);
    set<DTUsuario*> listarUsuarios();
    string altaUsuario(DTUsuario * usu);
    set<DTUsuario*> listarVendedores();
    string altaProducto(DTProducto * p,string vendedor);
    set<DTProducto*> listarProductos();
    void agregarProductoConVendedor(DTProducto * p, string nickVendedor);
    DTProducto * seleccionarProducto(string codigo);
    Usuario * obtenerVendedor(string codigo);
    set<DTUsuario*> altaPromocion(DTPromocion * p);
    set<DTProducto*> seleccionarVendedor(string nomVend, int codigo);
    Promocion* obtenerPromocion(int cod);
    void agregarProducto(string nomVend, int codProd, int cantMin, float descuento, int codigo);
};
#endif /* LOGICA_SISTEMA_H_ */