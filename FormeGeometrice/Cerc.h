//
// Created by stefan on 01.06.2022.
//

#ifndef FORMEGEOMETRICE_CERC_H
#define FORMEGEOMETRICE_CERC_H
#include "Forma.h"

class Cerc : public Forma{
private:
    int x;
    int y;
    int raza;
public:
    void set ( int, int, int);
    void Paint() const override;
};


#endif //FORMEGEOMETRICE_CERC_H
