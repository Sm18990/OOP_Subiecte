//
// Created by stefan on 31.05.2022.
//

#ifndef NUMBERS_DECIMAL_H
#define NUMBERS_DECIMAL_H
#include "Printer.h"

class Decimal : public Printer {
public:
    std::string getFormatName() override;
    std::string formatNumber(int number) override;
};


#endif //NUMBERS_DECIMAL_H
