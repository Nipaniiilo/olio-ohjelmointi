#include "car.h"
#include <iostream>
using namespace std;


Car::Car() {}

void Car::printData()
{
    cout<<"brand:"<<brand<<endl;
    cout<<"model:"<<model<<endl;
    cout<<"yearModel: :"<<yearModel<<endl;
}

void Car::setBrand(string a)
{
    brand=a;
}

void Car::setModel(string b)
{
    model=b;
}

void Car::setYearModel(int c)
{
    yearModel=c;
}
