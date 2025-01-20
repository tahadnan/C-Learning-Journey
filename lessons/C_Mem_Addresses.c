#include <stdio.h>

int main(){
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = the address of where a memory block is located (house address)

    int a;
    int b = 'Y';
    int c = 'Z';

    double d[90];

    printf("variable a of size %.0lu bytes lives at %p\n", sizeof(a), &a);
    printf("variable b of size %.0lu bytes lives at %p\n", sizeof(b), &b);
    printf("variable c of size %.0lu bytes lives at %p\n", sizeof(c), &c);
    printf("array d of size %.0lu bytes lives at %p\n", sizeof(d), &d);

    return 0;
}
