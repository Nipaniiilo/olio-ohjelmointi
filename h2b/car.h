#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    string model;
        int yearModel;

public:
    Car(string a, string b, int i);
    void printData() const;
};

#endif // CAR_H
