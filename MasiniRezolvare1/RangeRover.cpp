//
// Created by stefan on 31.05.2022.
//
#include "RangeRover.h"

void RangeRover::setConsum(int consume) {
    this -> consum = consume;
}
std::string RangeRover::getName() const {
    return "RangeRover";
}
int RangeRover::getConsum() const {
    return this -> consum;
}