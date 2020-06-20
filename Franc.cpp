#include "Franc.h"

Franc::Franc(int d){
    amount = d;
}

std::unique_ptr<Money> Franc::times(int multi){
    return std::unique_ptr<Money>(new Franc(amount*multi));
}

