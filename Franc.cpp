#include "Franc.h"
Franc::Franc(int d):amount(d){
    
}

Franc Franc::times(int multi){
    return Franc(amount*multi);
}

bool Franc::equals(Franc obj){
    return amount==obj.amount;
}
