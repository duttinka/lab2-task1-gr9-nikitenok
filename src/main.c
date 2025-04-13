#include <stdio.h>
#include "main.h"

bool is_lucky_number(int number) {
    int sum1 = (number / 100000) + 
               ((number / 10000) % 10) + 
               ((number / 1000) % 10);
    int sum2 = ((number / 100) % 10) + 
               ((number / 10) % 10) + 
               (number % 10);
    return sum1 == sum2;
}

int main() {
    return 0;
}