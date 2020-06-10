#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../main.h"
#include "../dollar.h"

TEST_CASE("testing the factorial function") {
    CHECK(factorial(0) == 1);
    CHECK(factorial(1) == 1);
    CHECK(factorial(2) == 2);
    CHECK(factorial(3) == 6);
    CHECK(factorial(10) == 3628800);
}

TEST_CASE("multiple dollars") {
    dollar d(5);
    dollar product = d.times(2);
    CHECK(product.amount == 10);
    
    product = d.times(10);
    CHECK(product.amount == 50);
}
