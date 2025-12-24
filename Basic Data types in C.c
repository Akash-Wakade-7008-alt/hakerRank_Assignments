#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    long int b;
    char c;
    float d;
    double e;
    
    scanf("%d %ld %c %f %lf",&a,&b,&c,&d,&e);
    printf("%d\n",a);
    printf("%ld\n",b);
    printf("%c\n",c);
    printf("%.3f\n",d);
    printf("%.9lf",e);
    
    return 0;
}



// Sample Input 0

// 3 12345678912345 a 334.23 14049.30493
// Sample Output 0

// 3
// 12345678912345
// a
// 334.230
// 14049.304930000
