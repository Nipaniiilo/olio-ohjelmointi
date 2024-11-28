#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include<iostream>

using namespace std;

class Car
{
private:
    Engine objEngine;
    Wheel wheels[4];
    string model;
    string brand;
public:
    Car();
    Engine getEngine() const;
    void setEngine();

    string getModel() const;
    void setModel(const string &newModel);

    string getBrand() const;
    void setBrand(const string &newBrand);

    void setWheels();

    void printDetails() const;

};

#endif // CAR_H
