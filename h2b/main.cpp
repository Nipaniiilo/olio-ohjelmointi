#include "car.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    Car objectCar0("Bmw","550", 2010);
    Car objectCar1("Volvo","740", 1995);
    Car objectCar2("Audi","A6", 2002);

    carList.push_back(objectCar0);
    carList.push_back(objectCar1);
    carList.push_back(objectCar2);

    cout<<"Listan toisen alkion tiedot: "<<endl;
    carList[1].printData();

     cout<<"Koko autolistan tiedot: "<<endl;

    for(int x=0; x<=2; x++){
        carList[x].printData();
        }
    return 0;

}
