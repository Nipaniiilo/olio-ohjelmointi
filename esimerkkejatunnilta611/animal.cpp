
#include "animal.h"

int animal::getWeight() const
{
    return weight;
}

void animal::setWeight(int newWeight)
{
    weight = newWeight;
}

string animal::getColor() const
{
    return color;
}

void animal::setColor(const string &newColor)
{
    color = newColor;
}

animal::~animal()
{
    cout<<"animal olio tuhottin :D huutis"<<endl;
}

void animal::printData()
{
    cout<<"*******************************"<<endl;
    cout<<"Elaimen vari="<<color<<"ja paino="<<weight<<endl;
    cout<<"*******************************"<<endl;
    cout<<"*******************************"<<endl;
}

animal::animal() {
    cout<<"animal olio luotiin"<<endl;
}

animal::animal(int w, string c)
{
    weight=w;
    color=c;
}
