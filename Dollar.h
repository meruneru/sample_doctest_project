#ifndef DOLLAR_H
#define DOLLAR_H

#include <iostream>

class dollar{
private:
    int amount;
public:
    dollar(int d);
    dollar times(int multi);
    bool equals(dollar obj);
    friend bool operator<(const dollar& t1, const dollar& t2) { return t1.amount < t2.amount;}
    friend bool operator>(const dollar& t1, const dollar& t2) { return t2 < t1; }
    friend bool operator<=(const dollar& t1, const dollar& t2) { return !(t1 > t2); }
    friend bool operator>=(const dollar& t1, const dollar& t2) { return !(t1 < t2); }
    friend bool operator==(const dollar& t1, const dollar& t2) { return !(t1 < t2) && !(t2 > t2); } 
    friend bool operator!=(const dollar& t1, const dollar& t2) { return !(t1 == t2); }
};

#endif /* DOLLAR_H */
