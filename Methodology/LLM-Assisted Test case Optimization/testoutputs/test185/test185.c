#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int result;
    
    asm("or %0, %1, %2" : "=r" (result) : "r" (a), "r" (b));
    
    printf("Result of or: %d\n", result);

    return 0;
}
