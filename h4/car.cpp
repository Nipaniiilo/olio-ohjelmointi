#include "car.h"




Engine Car::getEngine() const
{
    return objEngine;
}

void Car::setEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setWheels()
{
    for (Wheel &wheel:wheels){
        wheel.setSize(17);
        wheel.setType("kesarengas");
    }
}

void Car::printDetails() const
{
    cout<<"Auto : "<<model<<" "<< brand<<endl;
    cout<<"Moottori: "<<objEngine.getHorsepower()<<" hp, "<<objEngine.getDisplacement()<<" L"<<endl;

    int i=1;
    for (const Wheel &wheel:wheels){
        cout<<"Rengas " <<i++<<":"<<wheel.getSize()<<" tuumaa,"<<wheel.getType()<<endl;
    }

}

Car::Car() {

}
