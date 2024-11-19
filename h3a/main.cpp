#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    Chef objGordon("Gordon Ramsay");
    objGordon.makeSalad();
    objGordon.makeSoup();

    ItalianChef objBourdain("Anthony Bourdain");
    objBourdain.makeSalad();
    objBourdain.makeSoup();
    objBourdain.makePasta();
    cout<<"Name of the Italian Chef is "<<objBourdain.getName()<<endl;
    return 0;
}
