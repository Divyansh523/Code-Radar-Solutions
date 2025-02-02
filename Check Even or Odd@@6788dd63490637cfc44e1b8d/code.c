#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if (a%2=0){
        printf("Even.\n", a);
    }
    
    else{
      printf("odd.\n", a);
    }
    
    return 0;
}