#include "cat.h"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<cat> catList;
    //luodaan cat-luokan olioita
    cat objCat_1=cat("karvinen", "oranssi");
    cat objCat_2=cat("monni", "musta");
    cat objCat_3=cat("miuku", "musta");

    //lisätään oliot listaan (vektoriin)
    catList.push_back(objCat_1);
    catList.push_back(objCat_2);
    catList.push_back(objCat_3);

    //tulostetaan listan ensimmäisen kissan tiedot
    catList[0].printData();
    //tulostus

    cout<<"kaikki kissat"<<endl;
    for (int x=0; x<=2; x++){
        catList[x].printData();
    }
    //for-looppi, jos ei tiedetä monta alkioiden määärää
    for(const cat& Cat: catList) {
        cout<<cat.getName()<<endl;
    }



    return 0;
}
