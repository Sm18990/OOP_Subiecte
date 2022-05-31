//
// Created by stefan on 31.05.2022.
//

#ifndef MASINI_DACIA_H
#define MASINI_DACIA_H
#include "MasinaOras.h"

class Dacia : public MasinaOras {
private:
    int capacitate;
    std :: string culoare;
public:
    std::string getName() const override;
    std::string getCuloare() const override;
    int getCapacitate() const override;
    void setCapacitate(int );
    void setCuloare( std::string );
};


#endif //MASINI_DACIA_H
