#include <stdio.h>

void main() 
{
    int number, count = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

    
    if (number == 0)
     {
        count = 1; 
     } 
     else 
     {
        
        number = (number < 0) ? -number : number;

    
        while (number != 0) 
        {
            number /= 10;
            count++;      
        }
     }

    
    printf("The number of digits is: %d\n", count);

    
}