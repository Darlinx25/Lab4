#ifndef STRING_H
#define STRING_H

#include <cstddef>
#include "../../ICollection/interfaces/ICollectible.h"
#include "../../ICollection/interfaces/OrderedKey.h"

/**
 * Implementación simple del datatype String que hereda tanto de ICollectible
 * como de OrderedKey.
 */
class String : public ICollectible, public OrderedKey {
private:
    char* s;
public:
    // Construye el String a partir de un puntero a caracter
    String(const char* s = "");

    // Devuelve el valor del string
    const char* getValue() const;

    // Compara dos OrderedKey (override del método virtual puro)
    ComparisonRes compare(OrderedKey* k) const override;

    // Destructor
    virtual ~String();
};

#endif // STRING_H
