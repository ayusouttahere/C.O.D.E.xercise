// 68. Write a C program that prints the powers of 2 table for the powers 0 to 10, both positive and negative.
// =======================================
// n 2 to power n 2 to power -n
// =======================================
// 0 1 1.000000000000
// 1 2 0.500000000000
// 2 4 0.250000000000
// 3 8 0.125000000000
// 4 16 0.062500000000
// 5 32 0.031250000000
// 6 64 0.015625000000
// 7 128 0.007812500000
// 8 256 0.003906250000
// 9 512 0.001953125000
// 10 1024 0.000976562500

#include<stdio.h>
int main() {
    long int p;
    int n;
    double q;
    
    // Print table header
    printf("\n=======================================");
    printf("\n n    2 to power n      2 to power -n");
    printf("\n=======================================");
    
    p = 1;
    
    // Generate table
    for (n = 0; n < 11; ++n) {
        if (n == 0)
            p = 1;
        else
            p = p * 2;
        q = 1.0 / (double) p;
        printf("\n%2d   %8d     %20.12lf", n, p, q);
    }
    
    // Print table footer
    printf("\n======================================");
    
    return 0;
}