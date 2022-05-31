//
// Created by stefan on 31.05.2022.
//

#ifndef NUMBERS_PRINTER_H
#define NUMBERS_PRINTER_H
#include <string>
#include <iostream>

class Printer
{
public:
    virtual std::string getFormatName() = 0;
    virtual std::string formatNumber(int number) = 0;
};
#endif //NUMBERS_PRINTER_H
