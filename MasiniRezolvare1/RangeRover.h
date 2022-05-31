//
// Created by stefan on 31.05.2022.
//

#ifndef MASINI_RANGEROVER_H
#define MASINI_RANGEROVER_H
#include "SUV.h"

class RangeRover : public SUV {
private:
    int consum;
public:
    void setConsum( int );
    int  getConsum() const override;
    std::string getName() const override;
};


#endif //MASINI_RANGEROVER_H
