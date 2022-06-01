//
// Created by stefan on 01.06.2022.
//

#ifndef FORMEGEOMETRICE_OVAL_H
#define FORMEGEOMETRICE_OVAL_H
#include "Forma.h"

class Oval : public Forma{
private:
    int x;
    int y;
    int raza1;
    int raza2;
public:
    void set( int, int, int, int);
    void Paint() const override;
};


#endif //FORMEGEOMETRICE_OVAL_H
