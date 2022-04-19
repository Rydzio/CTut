#include <stdio.h>
#include <math.h>
#include <float.h>

int main(int argc, const char * argv[]) {
    
    float pi = 3.1415926;
    
    printf("3.1415926 + .0000001 = %.7f\n", pi + .0000001);
    
    printf("Precise Decimal Digits : %d\n", FLT_DIG);
    
    return 0;
}

/*
 short %d
 int %d
 long %ld
 float %f
 double %lf
 char %c
*/
