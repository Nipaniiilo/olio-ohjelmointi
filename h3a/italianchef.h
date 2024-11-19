#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(const string &newName);
    ~ItalianChef();
    void makePasta()const;

};

#endif // ITALIANCHEF_H
