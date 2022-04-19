#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    
//    --- 1. For loop ---
    /*
    //    *argv = "I am happy";
         for (int i = 0; i < argc; i++) {
             printf("arg %d : %s\n", i, argv[i]);
         }
     */
    
    
//    --- 2. Data flow ---
    /*
    float fTemp;
         printf("Enter Temp in F: ");
         scanf("%f", &fTemp);

         float cTemp = (fTemp - 32) / 1.8;
         printf("%.1f degrees Celcius\n", cTemp);
     */
    
    
//    --- 3. BigInt ---
    /*
     int bigInt = 2147483647;
     printf("Big Int: %d\n", bigInt + 1);
     */
    
    
//    --- 4. BigLong ---
    /*
     long bigLong = 9223372036854775807;
     printf("Big Long: %ld\n", bigLong + 1);
     */
    
    
//    --- 5. Float max & min ---
    /*
     printf("Min Float : %e\n", FLT_MIN);
     printf("Max Float : %e\n", FLT_MAX);
     */
    
    
//    --- 6. Float precision ---
    /*
     float pi = 3.1415926;
     
     printf("3.1415926 + .0000001 = %.7f\n", pi + .0000001);
     printf("Precise Decimal Digits : %d\n", FLT_DIG);
     */

    
//    --- 7. If, else, logic operators ---
    /*
    int age = 13;
    
    if (age <= 6) {
        printf("You are in kindergarten\n");
    } else if (age <= 13) {
        printf("You're in elementary\n");
    } else {
        printf("You're in highschool\n");
    }
    
    if (age >= 12 || age <= 13) {
        printf("You're in elementary");
    }
    bool isElementary = ((age >= 12) && (age <= 13));
    
    printf("Is in elementery: %d\n", isElementary);
    
    printf("Opposite of True: %d\n", (!true));
    
    bool isHighschool = (age > 13) ? 1 : 0;
    
    printf("Is in HighSchool : %d\n", isHighschool);
     */
    
    
//    --- 8. Basic math, casting, shorthand notation ---
    printf("3 + 2 = %d\n", 3 + 2);
    printf("3 - 2 = %d\n", 3 - 2);
    printf("3 * 2 = %d\n", 3 * 2);
    printf("3 / 2 = %d\n", 3 / 2);
    printf("3 %% 2 = %d\n", 3 % 2);
    
    printf("3 / 2 = %.2f\n", 3 / (float) 2);
    
    printf("2 + 1 * 3 = %d\n", 2 + 1 * 3);
    printf("(2 + 1) * 3 = %d\n", (2 + 1) * 3);
    
    int i = 0;
    
    printf("i++ = %d\n", i++);
    printf("++i = %d\n", ++i);
    
    printf("i + 5 = %d\n", i += 5);
    
    float j = 2.5;
    
    printf("j = %.1f\n", j);
    printf("ceil of j = %.1f\n", ceil(j));
    printf("floor of j = %.1f\n", floor(j));
    printf("fabs of j = %.1f\n", fabs(j));
    printf("sqrt of j = %.4f\n", sqrt(j));
    printf("exp of j = %.2f\n", exp(j));
    printf("exp2 of j = %.2f\n", exp2(j));
    printf("log of j = %.2f\n", log(j));
    printf("pow^3 of j = %.2f\n", pow(j, 3));
    
    
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
