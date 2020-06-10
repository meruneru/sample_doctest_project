#include "dollar.h"
dollar::dollar(int d):amount(d){
    
}

dollar dollar::times(int multi){
    return dollar(amount*multi);
}
