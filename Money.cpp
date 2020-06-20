#include"Money.h"
#include"./Dollar.h"
#include"./Franc.h"

std::unique_ptr<Money> Money::dollar(int amount){
    return std::unique_ptr<Money>(new Dollar(amount));
}

std::unique_ptr<Money> Money::franc(int amount){
    return std::unique_ptr<Money>(new Franc(amount));
}
