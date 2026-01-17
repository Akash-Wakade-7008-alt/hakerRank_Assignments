#include <stdio.h>


You are given an array of integers. Your task is to implement a function that reverses the order of the elements in the array in-place. You do not need to return anything.

Function Signature

void reverseArray(int arr[], int n);

Input Format:

The function reverseArray will receive:
An integer array arr of size n.
An integer n representing the number of elements in the array.


Output Format:

The function should modify the given array in-place by reversing its elements.
You do not need to print anything.


void reverseArray(int arr[], int n) {
    
    int i=0;
    int j=n-1;
    
    while(i<j)
    {
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;
        j--;
    }
    
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}