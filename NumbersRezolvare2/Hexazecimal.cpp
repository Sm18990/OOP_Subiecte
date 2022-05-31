//
// Created by stefan on 31.05.2022.
//

#include "Hexazecimal.h"


std::string Hexazecimal::getFormatName() {
    return "Hexazecimal";
}
std::string Hexazecimal::formatNumber(int number) {
    std::string value;
    while( number != 0 )
    {
        int remainder = number % 16;

        switch ( remainder ) {
            case 10:
                value += "A";
                break;
            case 11:
                value += "B";
                break;
            case 12:
                value += "C";
                break;
            case 13:
                value += "D";
                break;
            case 14:
                value += "E";
                break;
            case 15:
                value += "F";
                break;
            default:
                value += std::to_string( remainder );

        }

        number = number / 16;
    }

    return value;
}