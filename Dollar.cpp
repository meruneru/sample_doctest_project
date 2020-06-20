#include "Dollar.h"
Dollar::Dollar(int d){
  amount = d;  
}

std::unique_ptr<Money> Dollar::times(int multi){
    return std::unique_ptr<Money>(new Dollar(amount*multi));
}

