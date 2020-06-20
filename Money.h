#ifndef MONEY_H
#define MONEY_H

#include<typeinfo>
#include<memory>

class Money{
protected:
    int amount;
public:
    virtual ~Money(){};
    bool equals(const Money& obj){
        return amount==obj.amount;
    }
    
    virtual bool operator==(const Money& rhs) const {
        //std::cout<<"operator==  this:"<<typeid(*this).name()<<" rhs:"<<typeid(rhs).name()<<std::endl;
        return amount==rhs.amount && typeid(*this).name()==typeid(rhs).name();
    }
    virtual bool operator!=(const Money& rhs) const {
        //std::cout<<"operator!=  this:"<<typeid(*this).name()<<" rhs:"<<typeid(rhs).name()<<std::endl;
        return !(amount==rhs.amount) || typeid(*this).name()!=typeid(rhs).name();
    }

    virtual std::unique_ptr<Money> times(int multi) =0;
   
    //Factory method
    static std::unique_ptr<Money> dollar(int amount);
    static std::unique_ptr<Money> franc(int amount);
};

#endif /* MONEY_H */
