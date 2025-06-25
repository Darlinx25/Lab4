#include <string>
#include <stdexcept>
#include "String.h"

String::String(const char* str) {
    if (str == nullptr)
        throw std::invalid_argument("String constructor received null pointer.");
    s = str; // std::string hace la copia
}

String::~String() {}

const char* String::getValue() const {
    return s.c_str(); // Devuelve const char* si alguien lo necesita
}

ComparisonRes String::compare(OrderedKey* other) const {
    String* str = dynamic_cast<String*>(other);
    if (!str)
        throw std::invalid_argument("Invalid key type");

    if (s < str->s) return LESSER;
    if (s > str->s) return GREATER;
    return EQUAL;
}
