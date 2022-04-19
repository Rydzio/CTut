#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    
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
