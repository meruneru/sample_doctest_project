#ifndef MONEY_H
#define MONEY_H

#include<typeinfo>
class Money{
protected:
    int amount;
public:
    bool equals(Money obj){
        return amount==obj.amount;
    }
    
    virtual bool operator==(const Money& rhs){
        //std::cout<<"operator==  this:"<<typeid(*this).name()<<" rhs:"<<typeid(rhs).name()<<std::endl;
        return amount==rhs.amount && typeid(*this).name()==typeid(rhs).name();
    }
    virtual bool operator!=(const Money& rhs){
        //std::cout<<"operator!=  this:"<<typeid(*this).name()<<" rhs:"<<typeid(rhs).name()<<std::endl;
        return !(amount==rhs.amount) || typeid(*this).name()!=typeid(rhs).name();
    }
    
};

#endif /* MONEY_H */
