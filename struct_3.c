#include <stdio.h>

struct Number {
    int num;
    char c;
    int *numPointer;
};

int main() {
    struct Number num1;
    int num2 = 200;

    num1.num = 100;
    num1.c = 'a';
    num1.numPointer = &num2;

    printf("number of num1 is %d\n", num1.num);
    printf("char of num1 is %c\n", num1.c);
    printf("address of num1 is %p\n", &num1);
    printf("address of number of num1 is %p\n", &num1.num);
    printf("address of char of num1 is %p\n", &num1.c);
    printf("address of numPointer of num1 is %p\n", num1.numPointer);
    printf("numPointer of num1 points to %d\n", *num1.numPointer);
    printf("size of num1 is %ld\n", sizeof(num1));

    return 0;
}
