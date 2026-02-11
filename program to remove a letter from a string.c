#include <stdio.h>
int main() {
    char str[] = "Today is Sunday";
    int i, j = 0;
    char result[50];
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';
    printf("Original string: %s\n", str);
    printf("After removing 'a': %s\n", result);
    return 0;
}
