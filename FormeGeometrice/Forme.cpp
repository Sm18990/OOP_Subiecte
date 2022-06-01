//
// Created by stefan on 01.06.2022.
//

#include "Forme.h"

void Forme ::Add(Forma * form ) {
    this -> forme.push_back( form );
}

void Forme :: Paint() const {
    for ( auto e : this-> forme)
    {
        e -> Paint();
    }
}