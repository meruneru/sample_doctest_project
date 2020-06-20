#include "Dollar.h"

Dollar::Dollar(int d, std::string c):Money(d,c){
}

std::unique_ptr<Money> Dollar::times(int multi){
    return Money::dollar(amount*multi);
}

