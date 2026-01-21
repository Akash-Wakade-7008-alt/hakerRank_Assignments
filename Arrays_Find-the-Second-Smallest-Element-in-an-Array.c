#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

Given an array of integers, determine the second smallest distinct element in the array.

The second smallest element is defined as the element that is strictly greater than the smallest element and smaller than all other remaining elements.
If the array does not contain at least two distinct elements, print -1.
Note: Adjacent elements may be the same.

Input Format:

First line: An integer N, representing the size of the array
Second line: N space-separated integers


Output Format:

Print the second smallest distinct element in the array.
If no such element exists, print -1.

int main() {

    int N,count=0;
    
    scanf("%d",&N);
    
    int a[N];
    
    for(int i=0;i<=N-1;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<=N-2;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
    }
    
    if(count==N-1)
    {
        printf("-1");
        return 0;
    }
    
    
    int min=a[0];
    
    for(int i=1;i<=N-1;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    
    
    int secondSmallest=a[0];
    
    for(int i=1;i<=N-1;i++)
    {
        if(a[i]<secondSmallest)
        {
            if(a[i]==min)
            {
                continue;
            }
            
            else
            {
                secondSmallest=a[i];
            }
        }
    }
    
    
    printf("%d",secondSmallest);
    return 0;
}