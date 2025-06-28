#ifndef LOGICA_SISTEMA_H_
#define LOGICA_SISTEMA_H_
#include <list>
#include "Usuario.h"
#include "DTUsuario.h"
#include "../../ICollection/interfaces/IDictionary.h"

using namespace std;
class Sistema {
private:

    IDictionary * usuarios;
public:
    Sistema();
    virtual ~Sistema();
    string ingresar(string nick, string pass);
    set<DTUsuario*> listarUsuarios();
    virtual string altaUsuario(DTUsuario * usu);
};
#endif /* LOGICA_SISTEMA_H_ */