#include "Franc.h"

Franc::Franc(int d, std::string c):Money(d, c){
}

std::unique_ptr<Money> Franc::times(int multi){
    return Money::franc(amount*multi);
}

