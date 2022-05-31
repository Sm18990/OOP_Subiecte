//
// Created by stefan on 31.05.2022.
//

#include "Number.h"

Number :: Number ( int value ) {
    this -> number = value;
    this -> count = 0;
}
Number :: operator int () {
    return  this -> number;
}
Number Number ::operator*(Number n) const {
    Number aux( this-> number);
    aux.number *= n.number;
    return aux;
}
Number Number :: operator +( Number n) const {
    Number aux ( this -> number );
    aux.number += n.number;
    return aux;
}
Number Number :: operator / (Number n) const {
    Number aux ( this -> number );
    aux.number /= n.number;
    return aux;
}
Number Number ::operator-(Number n) const {
    Number aux ( this -> number );
    aux.number -= n.number;
    return aux;
}
Number  & Number::operator+=(Printer *prtn) {
    if( this -> count >= 100 )
    {
        return * this;
    }
    else {
        this -> printers[ count ++ ] = prtn;
    }
    return * this;
}
void Number::Print() const {
    for( int i = 0; i< this -> count; i++)
    {
        std::cout<<"Format: " + this->printers[i]->getFormatName() + " Value: " + this->printers[i]->formatNumber(this->number);
        std::cout<<"\n";
    }
}