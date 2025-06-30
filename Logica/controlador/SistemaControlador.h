#ifndef LOGICA_CONTROLADOR_SISTEMACONTROLADOR_H_
#define LOGICA_CONTROLADOR_SISTEMACONTROLADOR_H_
#include <string>
#include "../interfaceSistema/ISistema.h"
#include "../dominio/Sistema.h"

class SistemaControlador : public ISistema{
private:
    Sistema* sistema;
public:
    SistemaControlador();
    virtual ~SistemaControlador();
    virtual string ingresar(string nick, string pass);
    virtual set<DTUsuario*> listarUsuarios();
    virtual string altaUsuario(DTUsuario * usu);
    virtual set<DTUsuario*> listarVendedores();
    virtual string altaProducto(DTProducto * p,string vendedor);
    virtual set<DTProducto*> listarProductos();
    virtual DTProducto * seleccionarProducto(string codigo);
    virtual Usuario * obtenerVendedor(string codigo);
    virtual set<DTUsuario*> altaPromocion(DTPromocion * p);
    //virtual set<DTProducto*> seleccionarVendedor(string nickVendedor, int codPromocion);
    virtual Promocion * obtenerPromocion(int cod);
    virtual void agregarProducto(string nomVend, int codProd, int cantMin, float descuento, int codigo);
};

#endif /* LOGICA_CONTROLADOR_SISTEMACONTROLADOR_H_ */