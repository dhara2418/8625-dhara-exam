#include <stdio.h>

void main() 
{
    int a = 5, b = 10;

    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf("After swapping: a = %d, b = %d\n", a, b);
    
}