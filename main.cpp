#include "main.h"
#include "Dollar.h"
#include "Franc.h"

int factorial(int number) { return number > 1 ? factorial(number - 1) * number : 1; }

int main(){
    const Dollar d(5);
    const Franc f(5);

    std::cout<<typeid(d).name()<<std::endl;
    std::cout<<typeid(f).name()<<std::endl;
    if(d==f){
        std::cout<<"!="<<std::endl;
    }else{
        std::cout<<"=="<<std::endl;
    }
    return 0;
}
