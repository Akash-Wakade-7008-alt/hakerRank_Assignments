#include <stdio.h>

You are given an array of integers. Your task is to implement a function that modifies the given array in-place to left rotate it by one position.

Function Signature

void leftRotateByOne(int arr[], int n);
Note: The function should not return anything and must modify the given array itself.

Input Format:

The function leftRotateByOne will receive:
An integer array arr of size n.
An integer n representing the number of elements in the array.


Output Format:

The function should modify the given array in-place by one left rotation.
You do not need to print anything.




void leftRotateByOne(int arr[], int n) {

    int temp=arr[0];
    
    for(int i=0;i<=n-2;i++)
    {
        arr[i]=arr[i+1];
    }
    
    arr[n-1]=temp;
    
  
    
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    leftRotateByOne(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}