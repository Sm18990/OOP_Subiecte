//
// Created by stefan on 01.06.2022.
//

#include "Dreptunghi.h"
void Dreptunghi::Paint() const {
    std::cout<<"dreptunghi("<< this -> x << "," << this -> y << ","<< this->latime << ","<< this->lungime<<") \n";
}
void Dreptunghi::set(int x , int y , int latime , int lungime) {
    this -> x= x;
    this -> y = y;
    this -> latime = latime;
    this -> lungime = lungime;
}