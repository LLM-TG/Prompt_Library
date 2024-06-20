Here's a C program that utilizes the RISC-V C.ADDW instruction:

#include <stdio.h>

int main() {
    int a = 0x12345678;
    int b = 0x87654321;
    int result;

    __asm__ __volatile__ (
        "c.addw %0, %1"
        : "=r" (result)
        : "r" (b)
        : "memory"
    );

    printf("a = 0x%08X\nb = 0x%08X\nResult = 0x%08X\n", a, b, result);
    return 0;
}