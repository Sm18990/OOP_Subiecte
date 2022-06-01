//
// Created by stefan on 01.06.2022.
//

#ifndef FORMEGEOMETRICE_DREPTUNGHIROTIT_H
#define FORMEGEOMETRICE_DREPTUNGHIROTIT_H
#include "Dreptunghi.h"

class DreptunghiRotit : public Dreptunghi {
private:
    int unghiRotire;
public:
    void Paint() const override;
    void set(int, int, int, int, int) ;
};


#endif //FORMEGEOMETRICE_DREPTUNGHIROTIT_H
