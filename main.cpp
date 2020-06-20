#include "main.h"
#include "Dollar.h"
#include "Franc.h"

int factorial(int number) { return number > 1 ? factorial(number - 1) * number : 1; }

int main(){
    Dollar d(5);
    Franc f(5);

    if(d==*d.times(1)){
        std::cout<<"!="<<std::endl;
    }else{
        std::cout<<"=="<<std::endl;
    }
    return 0;
}
