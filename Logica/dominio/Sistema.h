#ifndef LOGICA_SISTEMA_H_
#define LOGICA_SISTEMA_H_
#include "Usuario.h"
#include "DTUsuario.h"
#include "../../ICollection/interfaces/IDictionary.h"
#include "DTProducto.h"
#include <string>

using namespace std;
class Sistema {
private:

    IDictionary * usuarios;
    IDictionary * productos;
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
};
#endif /* LOGICA_SISTEMA_H_ */