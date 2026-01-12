#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

You are given two arrays of integers, which may or may not have the same length.
Determine whether the two arrays are equal.

Two arrays are considered equal if and only if:

They have the same length
They contain the same elements
Elements are in the same order
If any of the above conditions fails, the arrays are not equal.

Input Format:

First line: Integer N, size of the first array
Second line: N space-separated integers (first array)
Third line: Integer M, size of the second array
Fourth line: M space-separated integers (second array)

Output Format:

Print: - Equal — if the two arrays are equal - Not Equal — otherwise


int main() {

    int N,M,flag=0;
    
    scanf("%d",&N);
    int a[N];
    
    for(int i=0;i<=N-1;i++)
    {
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&M);
    int b[M];
    
    for(int j=0;j<=M-1;j++)
    {
        scanf("%d",&b[j]);
    }
    
    
    if(M==N)
    {
        
        for(int i=0,j=0;i<=N-1,j<=M-1;i++,j++)
        {
            
            if(a[i]==b[j])
            {
                flag+=1;
            }
            
        }
        
    }
    
    
    if(flag==N)
    {
        printf("Equal");
    }
    
    else
    {
        printf("Not Equal");
    }
    
    return 0;
}
