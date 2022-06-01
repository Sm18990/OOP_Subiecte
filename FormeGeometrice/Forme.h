//
// Created by stefan on 01.06.2022.
//

#ifndef FORMEGEOMETRICE_FORME_H
#define FORMEGEOMETRICE_FORME_H
#include "Forma.h"
#include <list>

class Forme : public Forma{
private:
    std::list<Forma * > forme;
    int count = 0;
public:
    void Add( Forma * );

    void Paint() const override;
};


#endif //FORMEGEOMETRICE_FORME_H
