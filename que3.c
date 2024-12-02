#include <stdio.h>

void main() 
{
    int n, sum = 0, i = 1;

    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    
    if (n < 1) 
    {
        printf("Please enter a positive integer.\n");
        
    }

    
    do 
    {

        if (i % 2 != 0)
         { 
            sum += i;    
         }
         i++;

    } 
    while (i <= n); 

    
    printf("The sum of all odd numbers from 1 to %d is: %d\n", n, sum);

    
}