#ifndef ELEPHANT_H
#define ELEPHANT_H
#include "animal.h"

class elephant : public animal
{
private:
    string zooName;
public:
    elephant();
    string getZooName() const;
    void setZooName(const string &newZooName);
};

#endif // ELEPHANT_H
