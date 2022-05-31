//
// Created by stefan on 31.05.2022.
//

#ifndef MASINI_SUV_H
#define MASINI_SUV_H
#include "Masina.h"
class SUV : public Masina
{
public:
    virtual int getConsum() const = 0;
};
#endif //MASINI_SUV_H
