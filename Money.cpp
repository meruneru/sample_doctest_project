#include"Money.h"
#include"./Dollar.h"
#include"./Franc.h"

Money::Money(int d, std::string currency){
    m_amount = d;
    m_currency = currency;
}

std::unique_ptr<Money> Money::dollar(int amount){
    return std::unique_ptr<Money>(new Dollar(amount, "USD"));
}

std::unique_ptr<Money> Money::franc(int amount){
    return std::unique_ptr<Money>(new Franc(amount, "CHF"));
}

std::unique_ptr<Money> Money::times(int multi){
    return std::unique_ptr<Money>(new Money(m_amount*multi, m_currency));
}

