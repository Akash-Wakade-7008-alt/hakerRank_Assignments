#include <stdio.h>

You are given an array of size N-1 containing distinct integers from 1 to N (inclusive). This means exactly one number is missing from the sequence.

Your task is to read the input, determine the missing number, and print the output.

Input Format:

The first line contains a single integer N (size of the full sequence).
The second line contains N-1 distinct integers in the range [1, N] in any order.

Output Format:

Print the missing number in the sequence.

int main() {

    int N,sum_1=0,sum_2=0,res;
    scanf("%d",&N);
    
    int a[N-1];
    
    for(int i=0;i<=N-2;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=1;i<=N;i++)
    {
        sum_1+=i;
    }
    
    for(int i=0;i<=N-2;i++)
    {
        sum_2+=a[i];
    }
    
    res=sum_1-sum_2;
    
    printf("%d",res);
    
    return 0;
}