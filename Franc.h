#ifndef FRANC_H
#define FRANC_H

#include <iostream>

class Franc{
private:
    int amount;
public:
    Franc(int d);
    Franc times(int multi);
    bool equals(Franc obj);
    friend bool operator<(const Franc& t1, const Franc& t2) { return t1.amount < t2.amount;}
    friend bool operator>(const Franc& t1, const Franc& t2) { return t2 < t1; }
    friend bool operator<=(const Franc& t1, const Franc& t2) { return !(t1 > t2); }
    friend bool operator>=(const Franc& t1, const Franc& t2) { return !(t1 < t2); }
    friend bool operator==(const Franc& t1, const Franc& t2) { return !(t1 < t2) && !(t2 > t2); } 
    friend bool operator!=(const Franc& t1, const Franc& t2) { return !(t1 == t2); }
};

#endif /* FRANC_H */
