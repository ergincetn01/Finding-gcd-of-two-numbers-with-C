#include <stdio.h> // we imported standart library for C language
#include <math.h> /* we imported mathematics library but it is optional, the operations already can be done with the standart library. */
  
int main(void)
{
    int divisor,gcd,num1,num2; /* initializing the variables */
    
    printf("enter two positive  integers:\n "); 
    scanf("%d %d", &num1,&num2);
    
    for(divisor=1;divisor<=num1 && divisor<=num2;divisor++) {
        if(num2%divisor==0 && num1%divisor==0){
            gcd=divisor;
        }
        
    }
    printf("GCD of %d and %d = %d", num1,num2,gcd);
 
    return 0;
}
