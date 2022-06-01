//
// Created by stefan on 01.06.2022.
//

#ifndef FORMEGEOMETRICE_DREPTUNGHI_H
#define FORMEGEOMETRICE_DREPTUNGHI_H
#include "Forma.h"

class Dreptunghi : public Forma {
protected:
    int x;
    int y;
    int lungime;
    int latime;
public:
    void Paint() const override;
    void set(int, int, int, int);
};


#endif //FORMEGEOMETRICE_DREPTUNGHI_H
