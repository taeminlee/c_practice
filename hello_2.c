#include <stdio.h>


int main(void) {
    char greeting[] = "Hello, World!\n";

    printf("%s\n", greeting);

    for (int i = 0; greeting[i] != '\0'; i++) {
        printf("greeting[%d] = %c, 주소 = %p\n", i, greeting[i], &greeting[i]);
    }

    return 0;
}