#ifndef MONEY_H
#define MONEY_H

#include<iostream>
#include<typeinfo>
#include<memory>
#include<string>

class Money{
protected:
    int m_amount;
    std::string m_currency;
public:
    Money(int d, std::string currency);
    virtual ~Money(){};

    bool equals(const Money& obj){
        return m_amount==obj.m_amount;
    }

    virtual bool operator==(const Money& rhs) const {
        //std::cout<<"operator==  this:"<<typeid(*this).name()<<" rhs:"<<typeid(rhs).name()<<std::endl;
        //return amount==rhs.amount && typeid(*this).name()==typeid(rhs).name();
        return m_amount==rhs.m_amount && m_currency==rhs.m_currency;
    }
    virtual bool operator!=(const Money& rhs) const {
        //std::cout<<"operator!=  this:"<<typeid(*this).name()<<" rhs:"<<typeid(rhs).name()<<std::endl;
        //return !(amount==rhs.amount) || typeid(*this).name()!=typeid(rhs).name();
        return !(m_amount==rhs.m_amount) || m_currency!=rhs.m_currency;
    }

    virtual std::unique_ptr<Money> times(int multi);

    //Factory method
    static std::unique_ptr<Money> dollar(int amount);
    static std::unique_ptr<Money> franc(int amount);

    virtual std::string currency() final {
        return m_currency; 
    }
};

#endif /* MONEY_H */
