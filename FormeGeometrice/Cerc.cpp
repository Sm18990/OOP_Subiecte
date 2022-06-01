//
// Created by stefan on 01.06.2022.
//

#include "Cerc.h"

void Cerc::set(int x , int y , int raza) {
    this -> x = x;
    this -> y = y;
    this -> raza = raza;
}
void Cerc::Paint() const {
    std::cout<<"cerc( "<< this -> x << "," << this -> y << ","<< this->raza <<  ") \n";
}
