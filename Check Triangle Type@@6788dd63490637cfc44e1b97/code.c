#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b, c;
scanf("%d %d %d", &a, &b, &c);

    // Check for equilateral triangle
    if (a == b && b == c)
        printf("Equilateral");
    // Check for isosceles triangle
    else if (a == b || b == c || c == a)
        printf("Isosceles");
    // If none of the above, it's a scalene triangle
    else
        printf("Scalene");
   
    
    return 0;
}