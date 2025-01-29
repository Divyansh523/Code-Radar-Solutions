#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float r;
    scanf("%f",&r);
    int sum =r*r;
    float area = 3.14*sum;
    printf("%.2f",r);
    return 0;
}
