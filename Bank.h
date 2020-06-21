#ifndef BANK_H
#define BANK_H

#include"Money.h"
class Bank{
    public:
        std::unique_ptr<Money> reduce(std::unique_ptr<Expression>& exp, std::string currency);
};
#endif /* BANK_H */
