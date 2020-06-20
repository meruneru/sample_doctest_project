#ifndef DOLLAR_H
#define DOLLAR_H

#include <iostream>
#include "Money.h"

class Dollar: public Money{
private:
public:
    Dollar(int d);
    std::unique_ptr<Money> times(int multi);
};

#endif /* DOLLAR_H */
