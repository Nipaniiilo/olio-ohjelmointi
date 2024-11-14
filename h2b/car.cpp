#include "car.h"
#include <iostream>
using namespace std;




Car::Car(string a, string b, int i)
{
    brand=a;
    model=b;
    yearModel=i;
}

void Car::printData() const
{
    cout<<"brand: "<<brand<< ", model: "<<model<<", yearmodel: "<<yearModel<<endl;
}

