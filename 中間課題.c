#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MIN_LENGTH 8

int isStrongPassword(const char* password) {
    int length = strlen(password);
    
    if (length < MIN_LENGTH) {
        return 0; 
    }

    int hasUpper = 0, hasLower = 0;
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUpper = 1;
        } else if (islower(password[i])) {
            hasLower = 1;
        }
    }

    if (hasUpper && hasLower) {
        return 1; 
    }
    
    return 0; 
}

void suggestImprovements(const char* password) {
    int length = strlen(password);
    
    if (length < MIN_LENGTH) {
        printf("パスワードは8文字以上にしてください。\n");
    }

    int hasUpper = 0, hasLower = 0;
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUpper = 1;
        } else if (islower(password[i])) {
            hasLower = 1;
        }
    }
    if (!hasUpper) {
        printf("大文字を含める必要があります。\n");
    }
    if (!hasLower) {
        printf("小文字を含める必要があります。\n");
    }
}

int main() {
    char password[100];

    printf("パスワードを入力してください: ");
    fgets(password, sizeof(password), stdin);

    password[strcspn(password, "\n")] = '\0';

    if (isStrongPassword(password)) {
        printf("強いパスワードです。\n");
    } else {
        printf("強いパスワードではありません。\n");
        suggestImprovements(password); 
    }

    return 0;
}
