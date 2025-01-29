#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float r;
    scanf("%f",&r);
    float sum = r*r;
    printf("%.2f",sum*3.14);
    return 0;
}
