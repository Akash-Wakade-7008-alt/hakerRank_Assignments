#include <stdio.h>

Input Format:

A single integer n

Output Format

The single line containing the first n odd numbers, printed in reverse order, separated by spaces and ending with a full-stop(.)


int main() {

    int n;
    scanf("%d",&n);
    
    for(int i=2*n-1;i>=1;i-=2)
    {
        if(i!=1)
        {
             printf("%d ",i);
        }
       
        else{
             printf("%d.",i);
        }
        
    }
    
    return 0;
}