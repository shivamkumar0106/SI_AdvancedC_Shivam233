#include <stdio.h>

int main() {
    char a[16] = "Hello World 123";
    int i = 0;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    while (a[i] != '\0') {

        if (a[i] == ' ') {
            spaces++;
        }
        else if (a[i] >= '0' && a[i] <= '9') {
            digits++;
        }
        else if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) {

            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
                a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
                vowels++;
            }
            else {
                consonants++;
            }
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}