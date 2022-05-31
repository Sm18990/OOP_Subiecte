//
// Created by stefan on 31.05.2022.
//

#ifndef MASINI_OPEL_H
#define MASINI_OPEL_H
#include "MasinaOras.h"

class Opel : public MasinaOras{
private:
    int capacitate;
    std :: string culoare;
    int anFabricatie;
public:
    std::string getName() const override;
    std::string getCuloare() const override;
    int getCapacitate() const override;
    void setCapacitate(int );
    void setCuloare( std::string );
    void setAnFabricatie( int );
    int getAnFabricatie() const;
};


#endif //MASINI_OPEL_H
