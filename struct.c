#include <stdio.h>

struct Number {
    int num;
};

int main() {
    struct Number num1;
    num1.num = 100;
    printf("number of num1 is %d\n", num1.num);
    printf("address of num1 is %p\n", &num1);
    printf("address of number of num1 is %p\n", &num1.num);
    printf("size of num1 is %d\n", sizeof(num1));
    return 0;
}