#ifndef CAT_H
#define CAT_H

#include "animal.h"

class cat : public animal
{
private:
    string owner;
public:
    cat();
    cat(int, string, string);
    string getOwner() const;
    void setOwner(const string &newOwner);
    ~cat();

    virtual void printData() override;
};

#endif // CAT_H
