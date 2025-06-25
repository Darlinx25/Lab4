#ifndef STRING_H
#define STRING_H

#include <string>  // Usamos std::string
#include "../../ICollection/interfaces/ICollectible.h"
#include "../../ICollection/interfaces/OrderedKey.h"

/**
 * Implementación simple del datatype String que hereda tanto de ICollectible
 * como de OrderedKey.
 */
class String : public ICollectible, public OrderedKey {
private:
    std::string s;  // ✅ Reemplaza el char* por std::string
public:
    // Construye el String a partir de un puntero a caracter
    String(const char* s = "");

    // Devuelve el valor del string como puntero const char*
    const char* getValue() const;

    // Compara dos OrderedKey (override del método virtual puro)
    ComparisonRes compare(OrderedKey* k) const override;

    virtual ~String();  // No hace nada especial, pero lo dejamos igual
};

#endif // STRING_H
