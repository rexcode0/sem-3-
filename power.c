#include <math.h>
#include <stdio.h>

int power(int base, int superscript) {
    int power = (int) pow(base, superscript); 
    return power;
}
int main() {
    int base, exponent;
    printf("Enter the base and exponent respectively> ");
    scanf("%d %d", &base, &exponent);
    int pans = power(base, exponent);
    printf("%d raised to %d is %d\n", base, exponent, pans);
    return 0;
}
