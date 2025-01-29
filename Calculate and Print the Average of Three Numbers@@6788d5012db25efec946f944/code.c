#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,c;
    scanf("%d ",&a);scanf("%d ",&b);scanf("%d ",&c);
    float avg = (a+b+c)/3;
    printf("%d",avg);
}