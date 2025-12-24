#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <float.h>
#include<limits.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    printf("short: %d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("int: %d to %d\n",INT_MIN,INT_MAX);
    printf("long: %ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("long long: %lld to %lld\n",LLONG_MIN,LLONG_MAX);
    printf("unsigned short: %d to %hu\n",0,USHRT_MAX);
    printf("unsigned int: %d to %u\n",0,UINT_MAX);
    printf("unsigned long: %d to %lu\n",0,ULONG_MAX);
    printf("unsigned long long: %d to %llu\n",0,ULLONG_MAX);
    printf("char: %d to %d\n",SCHAR_MIN,SCHAR_MAX);
    printf("unsigned char: %d to %u\n",0,UCHAR_MAX);
    printf("float: %e to %e\n",FLT_MIN,FLT_MAX);
    printf("double: %e to %e\n",DBL_MIN,DBL_MAX);
    printf("long double: %Le to %Le\n",LDBL_MIN,LDBL_MAX);
    return 0;
}
