#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../Dollar.h"
#include "../Franc.h"

TEST_CASE("multiple Dollars") {
    std::unique_ptr<Money> five = Money::dollar(5);
    CHECK_EQ(*Money::dollar(5), *five->times(1));
    CHECK_EQ(*Money::dollar(10),*five->times(2));
}
TEST_CASE("multiple Franc") {
    std::unique_ptr<Money> five = Money::franc(5);
    CHECK_EQ(*Money::franc(5), *five->times(1));
    CHECK_EQ(*Money::franc(10), *five->times(2));
}

TEST_CASE("equals Dollars") {
    std::unique_ptr<Money> five = Money::dollar(5);
    CHECK(five->equals(*Money::dollar(5)) == true);
    CHECK(five->equals(*Money::dollar(50)) == false);
    
    std::unique_ptr<Money> zero = Money::dollar(0);
    CHECK(zero->equals(*Money::dollar(0)) == true);
    CHECK(zero->equals(*Money::dollar(1)) == false);
}
TEST_CASE("equals operator Dollars") {
    std::unique_ptr<Money> five1 = Money::dollar(5);
    std::unique_ptr<Money> five2 = Money::dollar(5);
    CHECK_EQ(*Money::dollar(5), *five1);
    CHECK_NE(*Money::dollar(0), *five1);
    
    CHECK_EQ(*five1, *five1);
    CHECK_EQ(*five2, *five2);
    CHECK_EQ(*five1, *five2);
    CHECK(*five1==*five2);
}
TEST_CASE("equals operator Franc") {
    std::unique_ptr<Money> five1 = Money::franc(5);
    std::unique_ptr<Money> five2 = Money::franc(5);
    CHECK_EQ(*Money::franc(5), *five1);
    CHECK_NE(*Money::franc(0), *five1);
    
    CHECK_EQ(*five1, *five1);
    CHECK_EQ(*five2, *five2);
    CHECK_EQ(*five1, *five2);
    CHECK(*five1==*five2);
}

TEST_CASE("equals operator Franc and Dollar") {
    std::unique_ptr<Money> fiveD = Money::dollar(5);
    std::unique_ptr<Money> fiveF = Money::franc(5);
    CHECK(*fiveD != *fiveF);
    CHECK(*Money::franc(0)==*Money::franc(0));
    CHECK(*Money::franc(0)!=*Money::franc(1));
    CHECK(*Money::franc(0)!=*Money::dollar(0));
}

TEST_CASE("currency") {
    std::unique_ptr<Money> fiveD = Money::dollar(5);
    std::unique_ptr<Money> fiveF = Money::franc(5);
    CHECK("USD" == fiveD->currency());
    CHECK("CHF" == fiveF->currency());
}

TEST_CASE("comprare currency") {
    CHECK(Money(5,"USD") == Dollar(5, "USD"));
    CHECK(Dollar(5,"USD") == Dollar(5, "USD"));
    CHECK(Money(5,"USD") == Money(5, "USD"));
    
    CHECK(Money(5,"CHF") == Franc(5, "CHF"));
    CHECK(Franc(5,"CHF") == Franc(5, "CHF"));
    CHECK(Money(5,"CHF") == Money(5, "CHF"));
}
