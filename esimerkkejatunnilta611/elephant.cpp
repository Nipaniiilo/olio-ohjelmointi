#include "elephant.h"

string elephant::getZooName() const
{
    return zooName;
}

void elephant::setZooName(const string &newZooName)
{
    zooName = newZooName;
}

elephant::elephant() {
    cout<<"elephant luokan olio luotiin"<<endl;
}
