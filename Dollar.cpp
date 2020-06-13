#include "Dollar.h"
Dollar::Dollar(int d){
  amount = d;  
}

Dollar Dollar::times(int multi){
    return Dollar(amount*multi);
}

