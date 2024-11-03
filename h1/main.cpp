#include "funktiot.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a,b;
    cout << "Hello World!" << endl;

    cout<<"Anna luku a: ";
    cin>>a;

    cout<<"Anna luku b: ";
    cin>>b;
    calcSum(a,b);
    calcDiv(a,b);
    retSum(a,b);
    retDiv(a,b);
    return (0);
}


