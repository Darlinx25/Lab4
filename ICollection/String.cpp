#include <cstddef>     // Para size_t
#include <string.h>    // Para strlen, strcpy, strcmp SIN usar std::
#include <stdexcept>   // Para lanzar excepciones

#include "String.h"
#include "OrderedKey.h"

String::String(const char* str) {
    if (str == nullptr) {
        throw std::invalid_argument("String constructor received null pointer.");
    }
    int strSize = strlen(str); // ✅ SIN std::
    s = strcpy(new char[strSize + 1], str); // ✅ SIN std::
}

String::~String() {
    delete[] s;
}

const char* String::getValue() const {
    return s;
}

ComparisonRes String::compare(OrderedKey* other) const {
    String* str = dynamic_cast<String*>(other);
    if (str == nullptr) {
        throw std::invalid_argument("Invalid key type in String::compare.");
    }

    int cmp = strcmp(s, str->s); // ✅ SIN std::
    return (cmp < 0) ? LESSER : (cmp > 0) ? GREATER : EQUAL;
}
