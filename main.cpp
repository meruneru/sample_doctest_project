#include "main.h"
int factorial(int number) { return number > 1 ? factorial(number - 1) * number : 1; }
