#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int num;
   scanf("%d", &num);

    // Divide the number by 2 and check the remainder using division
    if (num / 2 * 2 == num)
        printf("Even");
    else
        printf("Odd");

    return 0;
}