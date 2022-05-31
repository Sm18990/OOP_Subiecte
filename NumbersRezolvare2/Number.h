//
// Created by stefan on 31.05.2022.
//

#ifndef NUMBERS_NUMBER_H
#define NUMBERS_NUMBER_H
#include "Printer.h"

class Number {
private:
    int number;
    int count;
    Printer * printers [ 100 ];
public:
    Number(int value);
    operator int();
    Number operator + ( Number n) const;
    Number operator / ( Number n) const;
    Number operator * ( Number n) const;
    Number operator - ( Number n) const;
    Number & operator += ( Printer * prtn);
    void Print() const;
};


#endif //NUMBERS_NUMBER_H
