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
void find_lucky_numbers(int start, int end) {
    int count = 0;
    for (int i = start; i <= end; i++) {
        if (is_lucky_number(i)) {
            printf("%d\n", i);
            count++;
        }
    }
    printf("\ntotal lucky numbers: %d\n", count);
}

int main() {
           find_lucky_numbers(100000, 999999);
           printf("program for variant 32:\n");
           printf("finding all 6-digit lucky numbers\n\n");
           printf("lucky numbers between 100000 and 999999:\n");
           find_lucky_numbers(100000, 999999);
               return 0;

}