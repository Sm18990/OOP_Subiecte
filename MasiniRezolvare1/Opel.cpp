//
// Created by stefan on 31.05.2022.
//

#include "Opel.h"
std::string Opel::getName() const {
    return "Opel";
}
std::string Opel::getCuloare() const {
    return this -> culoare;
}
int Opel::getCapacitate() const {
    return this->capacitate;
}
void Opel::setCapacitate(int value) {
    this -> capacitate = value;
}
void Opel::setCuloare(std::string color) {
    this -> culoare = color;
}
void Opel::setAnFabricatie(int year) {
    this -> anFabricatie = year;
}
int Opel::getAnFabricatie() const {
    return this -> anFabricatie;
}