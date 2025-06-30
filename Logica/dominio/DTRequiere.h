//
// Created by Chorizo-Cosmico on 29/06/2025.
//

#ifndef DTREQUIERE_H
#define DTREQUIERE_H



class DTRequiere {
private:
    int cantMinParaOferta;
    float descuento;
public:
    DTRequiere(int cantMinParaOferta, float descuento);
    virtual ~DTRequiere();
    int getCantMin();
    float getDescuento();
};

#endif //DTREQUIERE_H
