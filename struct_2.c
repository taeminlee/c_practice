#include <stdio.h>

struct Number {
    int num;
    char c;
};

int main() {
    struct Number num1;
    num1.num = 100;
    num1.c = 'a';
    printf("number of num1 is %d\n", num1.num);
    printf("char of num1 is %c\n", num1.c);
    printf("address of num1 is %p\n", &num1);
    printf("address of number of num1 is %p\n", &num1.num);
    printf("address of char of num1 is %p\n", &num1.c);
    printf("size of num1 is %d\n", sizeof(num1));
    return 0;
}