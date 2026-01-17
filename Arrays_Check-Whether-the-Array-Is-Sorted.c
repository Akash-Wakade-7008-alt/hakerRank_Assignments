#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


Given an array of integers, determine whether the array is sorted.

Print "Ascending" if the array is sorted in non-decreasing (ascending) order
Print "Descending" if the array is sorted in non-increasing (descending) order
Print "Not Sorted" otherwise
NOTE: An array with equal adjacent elements is considered sorted - "Ascending"

Input Format:

First line: An integer N, representing the size of the array
Second line: N space-separated integers

Output Format:

Print one of the following:

Ascending
Descending
Not Sorted

int main() {

    int N,count_1=0,count_2=0,flag=0;
    
    scanf("%d",&N);
    
    int a[N];
    
    for(int i=0;i<=N-1;i++)
    {
        scanf("%d",&a[i]);
    }
    
    if(N==1)
    {
        printf("Ascending");
        return 0;    
    }
    
    
    for(int i=0;i<=N-1;i++)
    {
        if(a[i+1]==a[i])
        {
            flag=1;
        }
    }
    
    if(flag==1)
    {
        printf("Ascending");
        return 0;
    }
    
    
    for(int i=0;i<=N-1;i++)
    {
        if(a[i+1]>=a[i])
        {
            count_1++;
        }
    }
    
    for(int i=0;i<=N-1;i++)
    {
        if(a[i+1]<=a[i])
        {
            count_2++;
        }
    }
    
    
    
    if(count_1==N)
    {
        printf("Ascending");
    }
    
    else if(count_2==N)
    {
        printf("Descending");
    }
    
    else if(count_1!=N || count_2!=N)
    {
        printf("Not Sorted");
    }
    
    
    
    return 0;
}
