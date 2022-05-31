//
// Created by stefan on 31.05.2022.
//

#ifndef MASINI_MASINAORAS_H
#define MASINI_MASINAORAS_H
#include "Masina.h"
class  MasinaOras : public Masina {
public:
    virtual int getCapacitate() const = 0;
    virtual std :: string getCuloare() const = 0;
};
#endif //MASINI_MASINAORAS_H
