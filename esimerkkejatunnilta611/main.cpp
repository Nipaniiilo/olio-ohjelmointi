#include "cat.h"
#include "elephant.h"
#include <iostream>

using namespace std;

int main()
{

    cat objCat;

    elephant objElephant;

     objCat.setOwner("Liisa");
     objCat.setColor("oranssi");
     objCat.setWeight(4);

     objElephant.setZooName("Korkeasaari");
     objElephant.setColor("harmaa");
     objElephant.setWeight(3500);

     cat objCat2=cat(5,"musta","teppo");

    cout<<"eka kissan omistaja="<<objCat.getOwner()<<endl;
    cout<<"eka kissan omistaja="<<objCat2.getOwner()<<endl;

    objCat.printData();
    objCat2.printData();
    objElephant.printData();

    return 0;
}
