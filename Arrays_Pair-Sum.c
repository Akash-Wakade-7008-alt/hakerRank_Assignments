#include <stdio.h>

You are given an array of integers and a target_sum. Your task is to find the first pair of integers in the array whose sum is equal to the target sum. The pair should be printed in the order they appear in the array.

Input Format:

The first line contains an integer n, the number of elements in the array.
The second line contains n space-separated integers representing the array elements.
The third line contains an integer target_sum, the target sum.

Output Format:

Print the first pair of integers in the array whose sum is equal to the target sum. Print the pair as space-separated integers on a single line. If no such pair exists, print -1.


int main() {

    int N,targetSum;
    
    scanf("%d",&N);
    
    int a[N];
    
    for(int i=0;i<=N-1;i++)
    {
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&targetSum);
    
    for(int i=0;i<=N-2;i++)
    {
        
        for(int j=i+1;j<=N-1;j++)
        {
            if((a[i]+a[j]==targetSum))
            {
                printf("%d %d",a[i],a[j]);
                return 0;
            }
            
             if(i==N-2 && j==N-1)
             {
                 if((a[i]+a[j])!=targetSum)
                 {
                     printf("-1");
                 }
             }
        }
    }
    
    
    return 0;
}