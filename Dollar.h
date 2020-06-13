#ifndef DOLLAR_H
#define DOLLAR_H

#include <iostream>
#include "Money.h"

class Dollar: public Money{
private:
public:
    Dollar(int d);
    Dollar times(int multi);
    friend bool operator<(const Dollar& t1, const Dollar& t2) { return t1.amount < t2.amount;}
    friend bool operator>(const Dollar& t1, const Dollar& t2) { return t2 < t1; }
    friend bool operator<=(const Dollar& t1, const Dollar& t2) { return !(t1 > t2); }
    friend bool operator>=(const Dollar& t1, const Dollar& t2) { return !(t1 < t2); }
    friend bool operator==(const Dollar& t1, const Dollar& t2) { return !(t1 < t2) && !(t2 > t2); } 
    friend bool operator!=(const Dollar& t1, const Dollar& t2) { return !(t1 == t2); }
};

#endif /* DOLLAR_H */
