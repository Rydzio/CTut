#include <stdio.h>

int main(int argc, const char * argv[]) {
//    *argv = "I am happy";
    for (int i = 0; i < argc; i++) {
        printf("arg %d : %s\n", i, argv[i]);
    }
    return 0;
}
