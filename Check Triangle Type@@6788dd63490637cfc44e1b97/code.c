#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    // Check if it's a valid triangle
    if (a + b > c && b + c > a && c + a > b) {
        // Check for equilateral triangle
        if (a == b && b == c)
            printf("Equilateral triangle\n");
        // Check for isosceles triangle
        else if (a == b || b == c || c == a)
            printf("Isosceles triangle\n");
        // If none of the above, it's a scalene triangle
        else
            printf("Scalene triangle\n");
    } 
    
    return 0;
}