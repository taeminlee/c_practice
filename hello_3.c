#include <stdio.h>
#include <string.h>

int get_utf8_char_length(char ch) {
    if ((ch & 0b10000000) == 0b00000000) return 1; // 0xxxxxxx
    else if ((ch & 0b11100000) == 0b11000000) return 2; // 110xxxxx
    else if ((ch & 0b11110000) == 0b11100000) return 3; // 1110xxxx
    else if ((ch & 0b11111000) == 0b11110000) return 4; // 11110xxx
    return 1; // Basic ASCII or invalid UTF-8
}

int main(void) {
    char greeting_ko[] = "안녕하세요, 세상!\n";

    for (int i = 0; greeting_ko[i] != '\0'; i++) {
        printf("greeting_ko[%d] = %c, 주소 = %p\n", i, greeting_ko[i], &greeting_ko[i]);
    }

    for (int i = 0; i < strlen(greeting_ko);) {
        int char_len = get_utf8_char_length(greeting_ko[i]);
        printf("문자: ");
        for (int j = 0; j < char_len; j++) {
            printf("%c", greeting_ko[i + j]);
        }
        printf(", 주소: %p\n", &greeting_ko[i]);
        i += char_len;
    }

    return 0;
}