//
// Created by stefan on 31.05.2022.
//

#include "Decimal.h"

std::string Decimal ::getFormatName() {
    return "Decimal";
}
std::string Decimal ::formatNumber(int number) {
    return std::to_string( number );
}