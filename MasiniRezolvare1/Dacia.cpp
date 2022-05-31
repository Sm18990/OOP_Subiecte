//
// Created by stefan on 31.05.2022.
//

#include "Dacia.h"
std::string Dacia::getName() const {
    return "Dacia";
}
std::string Dacia::getCuloare() const {
    return this -> culoare;
}
int Dacia::getCapacitate() const {
    return this->capacitate;
}
void Dacia::setCapacitate(int value) {
    this -> capacitate = value;
}
void Dacia::setCuloare(std::string color) {
    this -> culoare = color;
}