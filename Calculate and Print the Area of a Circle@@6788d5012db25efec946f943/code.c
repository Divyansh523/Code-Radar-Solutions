#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float r;
    scanf("%f",&r);
    float area = 3.14*r*r;
    printf("%f",area);
    return 0;
}
