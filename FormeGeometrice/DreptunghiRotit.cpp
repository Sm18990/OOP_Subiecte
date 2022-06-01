//
// Created by stefan on 01.06.2022.
//

#include "DreptunghiRotit.h"
void DreptunghiRotit::Paint() const {
    std::cout<<"dreptunghi("<< this -> x << "," << this -> y << ","<< this->latime << ","<< this->lungime<<") rotit la "<< this->unghiRotire<<" de grade \n";
}
void DreptunghiRotit::set(int x, int y, int latime, int lungime, int unghiRotire) {
    this -> x= x;
    this -> y = y;
    this -> latime = latime;
    this -> lungime = lungime;
    this -> unghiRotire = unghiRotire;
}