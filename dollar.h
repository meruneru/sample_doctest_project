#ifndef DOLLAR_H
#define DOLLAR_H

#include <iostream>

class dollar{
private:
public:
    int amount;
    dollar(int d);
    dollar times(int multi);
};

#endif /* DOLLAR_H */