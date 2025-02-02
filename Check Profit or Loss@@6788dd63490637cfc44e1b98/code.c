#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
     float cp, sp;

    
    scanf("%f %f", &cp, &sp);

    if (sp > cp)
        printf("Profit\n");
    else if (sp < cp)
        printf("Loss\n");
    else
        printf("No Profit No Loss\n");

    return 0;
}