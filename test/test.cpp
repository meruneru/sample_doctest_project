#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../Dollar.h"
#include "../Franc.h"

TEST_CASE("multiple Dollars") {
    Dollar d(5);
    CHECK_EQ(Dollar(5), *d.times(1));
    CHECK_EQ(Dollar(10), *d.times(2));
}
TEST_CASE("multiple Franc") {
    Franc f(5);
    CHECK_EQ(Franc(5), *f.times(1));
    CHECK_EQ(Franc(10), *f.times(2));
}

TEST_CASE("equals Dollars") {
    Dollar d1(5);
    CHECK(d1.equals(Dollar(5)) == true);
    CHECK(d1.equals(Dollar(50)) == false);
    
    Dollar d2(0);
    CHECK(d2.equals(Dollar(0)) == true);
    CHECK(d2.equals(Dollar(1)) == false);
}
TEST_CASE("equals operator Dollars") {
    Dollar d1(5);
    Dollar d2(5);
    CHECK_EQ(Dollar(5), d1);
    CHECK_NE(Dollar(0), d1);
    
    CHECK_EQ(d1, d1);
    CHECK_EQ(d1, d2);
    CHECK_EQ(d2, d2);
    CHECK(d1==d2);
}
TEST_CASE("equals operator Franc") {
    Franc d1(5);
    Franc d2(5);
    CHECK_EQ(Franc(5), d1);
    CHECK_NE(Franc(0), d1);
    
    CHECK_EQ(d1, d1);
    CHECK_EQ(d1, d2);
    CHECK_EQ(d2, d2);
    CHECK(d1==d2);
}

TEST_CASE("equals operator Franc and Dollar") {
    Franc d1(5);
    Dollar d2(5);
    CHECK(d1 != d2);
    CHECK(Franc(0)==Franc(0));
    CHECK(Franc(0)!=Franc(1));
    CHECK(Franc(0)!=Dollar(0));
}

