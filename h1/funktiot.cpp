#include "funktiot.h"
#include <iostream>
#include <iomanip>

void doubleNum(int value)
{
    cout<<"tuplattuna luku on "<<2*value<<endl;
}

void calcSum(float a, float b)
{
    cout<<"lukujen tulostettu summa on "<<a+b<<endl;
}


void calcDiv(float a, float b)
{
    if (b !=0){
         cout<<"lukujen tulostettu osamaara on "<<fixed<<setprecision(2)<<a/b<<endl;
    }
    else
        cout<< "nollalla jakaminen on kiellettya"<<endl;

}



int retSum(int a, int b)
{
    cout<<"lukujen palauttama arvo on "<<a+b<<endl;
    return a+b;


}

float retDiv(float a, float b)
{
    if (b !=0) {
        cout<<"lukujen palauttama arvo on "<<fixed<<setprecision(2)<<a/b<<endl;
    return a/b;

    } else {
        cout <<"nollalla jakaminen on kiellettya"<<endl;
        return 0;
    }
}
