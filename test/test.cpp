#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../Dollar.h"
#include "../Franc.h"

TEST_CASE("multiple Dollars") {
    std::unique_ptr<Money> five = Money::dollar(5);
    CHECK_EQ(Dollar(5), *five->times(1));
    CHECK_EQ(Dollar(10),*five->times(2));
}
TEST_CASE("multiple Franc") {
    std::unique_ptr<Money> five = Money::franc(5);
    CHECK_EQ(Franc(5), *five->times(1));
    CHECK_EQ(Franc(10), *five->times(2));
}

TEST_CASE("equals Dollars") {
    std::unique_ptr<Money> five = Money::dollar(5);
    CHECK(five->equals(Dollar(5)) == true);
    CHECK(five->equals(Dollar(50)) == false);
    
    std::unique_ptr<Money> zero = Money::dollar(0);
    CHECK(zero->equals(Dollar(0)) == true);
    CHECK(zero->equals(Dollar(1)) == false);
}
TEST_CASE("equals operator Dollars") {
    std::unique_ptr<Money> five1 = Money::dollar(5);
    std::unique_ptr<Money> five2 = Money::dollar(5);
    CHECK_EQ(Dollar(5), *five1);
    CHECK_NE(Dollar(0), *five1);
    
    CHECK_EQ(*five1, *five1);
    CHECK_EQ(*five2, *five2);
    CHECK_EQ(*five1, *five2);
    CHECK(*five1==*five2);
}
TEST_CASE("equals operator Franc") {
    std::unique_ptr<Money> five1 = Money::franc(5);
    std::unique_ptr<Money> five2 = Money::franc(5);
    CHECK_EQ(Franc(5), *five1);
    CHECK_NE(Franc(0), *five1);
    
    CHECK_EQ(*five1, *five1);
    CHECK_EQ(*five2, *five2);
    CHECK_EQ(*five1, *five2);
    CHECK(*five1==*five2);
}

TEST_CASE("equals operator Franc and Dollar") {
    std::unique_ptr<Money> fiveD = Money::dollar(5);
    std::unique_ptr<Money> fiveF = Money::franc(5);
    CHECK(fiveD != fiveF);
    CHECK(Franc(0)==Franc(0));
    CHECK(Franc(0)!=Franc(1));
    CHECK(Franc(0)!=Dollar(0));
}

