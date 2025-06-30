#include"SistemaControlador.h"
#include <string>
#include "../dominio/Sistema.h"
SistemaControlador::SistemaControlador() {
    //siempre que instancio un controlador, intancio sus dependencias
    ///en este caso la clase Sistema.
    this->sistema = new Sistema();
}
SistemaControlador::~SistemaControlador() {
    // TODO Auto-generated destructor stub
}
string SistemaControlador::ingresar(string nick, string pass) {
    //en este caso muy sencillo, el controlador actua de "paso mano"
    //por lo que es posible que no le encutre mucho sentido
    //en caso de usos más complejos el controlador cumple el rol de
    //"orquestador", por ahor lo mantemos simple.
    return this->sistema->ingresar(nick, pass);
}

set<DTUsuario*> SistemaControlador::listarUsuarios()
{
    return this->sistema->listarUsuarios();
}

string SistemaControlador::altaUsuario(DTUsuario * usu) {

    return this->sistema->altaUsuario(usu);

}

set<DTUsuario*>  SistemaControlador::listarVendedores() {
   return this->sistema->listarVendedores();
}

string SistemaControlador::altaProducto(DTProducto * p,string vendedor)
{
    return this->sistema->altaProducto(p,vendedor);
}

set<DTProducto*> SistemaControlador:: listarProductos() {
    return this->sistema->listarProductos();
}

DTProducto * SistemaControlador::seleccionarProducto(string codigo)
{
    return this->sistema->seleccionarProducto(codigo);
}

Usuario *SistemaControlador::obtenerVendedor(string codigo) {
    return this->sistema->obtenerVendedor(codigo);
}

set<DTUsuario*> SistemaControlador::altaPromocion(DTPromocion * p) {
    return this->sistema->altaPromocion(p);
}

/*set<DTProducto*> SistemaControlador::seleccionarVendedor(string nickVendedor, int codPromocion) {
    return this->sistema->seleccionarVendedor(nickVendedor, codPromocion);

}*/

Promocion* SistemaControlador::obtenerPromocion(int cod) {
    return this->sistema->obtenerPromocion(cod);
}

void SistemaControlador::agregarProducto(string nomVend, int codProd, int cantMin, float descuento, int codigo) {
    this->sistema->agregarProducto(nomVend, codProd, cantMin, descuento, codigo);
}