#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    int num_1,num_2;
    
    scanf("%d",&num_1);
    scanf("%d",&num_2);
    
    int res=num_1%10+num_2%10;
        
    printf("The sum of last digits is: %d",res);
    
    return 0;
}
