#include <stdio.h>

biggest2(){
     int a, b;
    
    // Asking for Input
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    if (a > b){
        printf("%d is largest Number.", a);
    }
    else if (b > a){
        printf("%d is largest Number.", b);
    }
    else{
        printf("Both numbers are equal.");
    }
    // return 0;
}
