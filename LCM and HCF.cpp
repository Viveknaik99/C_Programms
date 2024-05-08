#include <stdio.h>
int gcd(int a, int b) 
{
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int gcd_result = gcd(num1, num2);
    int lcm_result = lcm(num1, num2);

    printf("GCD (HCF) of %d and %d is %d\n", num1, num2, gcd_result);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm_result);
    return 0;
}

