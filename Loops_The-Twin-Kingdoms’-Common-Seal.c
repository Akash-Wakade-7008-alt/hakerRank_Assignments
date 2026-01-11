#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


n the land of Arithmia, there are two neighboring kingdoms ruled by King Shivam and Queen Belia. Each kingdom owns a magical seal engraved with a positive integer.
To form an alliance, both seals must be stamped with the largest possible common magical power that can divide both numbers exactly.
The royal mathematician must determine the Greatest Common Divisor (GCD) of the two numbers to create the alliance seal.
Your mission is to help the mathematician find the GCD of two natural numbers.

Input Format:

A single line containing two space-separated natural numbers A and B



Output Format:

Print a single integer i.e. the GCD of A and B

int main() {

    
    int M,N;
    scanf("%d %d",&M,&N);
    
    if(M>N)
    {
        
        if(N!=0)
        {
            for(int i=N;i>=1;i--)
            {
                if(N%i==0 && M%i==0)
                {
                   printf("%d",i);
                    break;
                }
            }  
        }
        
        
        else if(N==0)
        {
            printf("%d",M);
        }
        
        
    }
    
    
    
    else if(M<=N)
    {
     
        if(M!=0)
        {
            for(int i=M;i>=1;i--)
            {
                 if(N%i==0 && M%i==0)
                 {
                    printf("%d",i);
                    break;
                 }
            }   
        }
        
        else if(M==0)
        {
            printf("%d",N);
        }
        
        
         
    }
    
    
    return 0;
}
