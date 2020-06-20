#ifndef FRANC_H
#define FRANC_H

#include <iostream>
#include "./Money.h"

class Franc: public Money{
private:
public:
    Franc(int d);
    std::unique_ptr<Money> times(int multi);
};

#endif /* FRANC_H */
