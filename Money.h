#ifndef MONEY_H
#define MONEY_H

class Money{
protected:
    int amount;
public:
    bool equals(Money obj){
        return amount==obj.amount;
    }
};

#endif /* MONEY_H */
