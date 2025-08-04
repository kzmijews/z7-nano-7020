#include <stdio.h>

// adder_ip definition
void adder_ip(unsigned int a,
              unsigned int b,
              unsigned int *c);

int main() {
    unsigned int a, b, c;
    a = 1000;
    b = 2000;
    c = 0;
    adder_ip(a, b, &c);
    printf("%d + %d is %d\n", a, b, c);
    if (c != (a+b)) {
        return 1;
    }
    return 0;
}