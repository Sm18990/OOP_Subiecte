//
// Created by stefan on 31.05.2022.
//

#ifndef NUMBERS_HEXAZECIMAL_H
#define NUMBERS_HEXAZECIMAL_H
#include "Printer.h"

class Hexazecimal : public Printer {
public:
    std::string getFormatName() override;
    std::string formatNumber(int number) override;
};


#endif //NUMBERS_HEXAZECIMAL_H
