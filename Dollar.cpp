#include "dollar.h"
dollar::dollar(int d):amount(d){
    
}

dollar dollar::times(int multi){
    return dollar(amount*multi);
}

bool dollar::equals(dollar obj){
    return amount==obj.amount;
}
