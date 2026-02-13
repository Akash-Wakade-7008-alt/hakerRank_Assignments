#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int lenght,bredth;
    scanf("%d",&lenght);
    scanf("%d",&bredth);
    
    int res=lenght*bredth;
    printf("The area is: %d units",res);
    
    return 0;
}
