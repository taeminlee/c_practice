#include <stdio.h>

struct Number {
    int num;
    char c;
    struct Number *next;
};

int main() {
    struct Number num1;
    struct Number num2;

    num1.num = 100;
    num1.c = 'a';
    num1.next = &num2;

    num2.num = 200;
    num2.c = 'b';
    num2.next = NULL;

    printf("number of num1 is %d\n", num1.num);
    printf("char of num1 is %c\n", num1.c);

    if(num1.next != NULL) {
        printf("Num1 next points to a structure with number %d and char %c\n", num1.next->num, num1.next->c);
    } else {
        printf("Num1 next does not point to any other structure\n");
    }

    printf("size of num1 is %ld\n", sizeof(num1));

    return 0;
}
