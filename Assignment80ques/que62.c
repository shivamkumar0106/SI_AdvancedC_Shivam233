#include <stdio.h>

int main() {
    char str[5][20] = {"Banana", "Apple", "Mango", "Cherry", "Orange"};
    char temp[20];
    int i, j, k;

    for (i = 0; i < 4; i++) {

        for (j = i + 1; j < 5; j++) {

            for (k = 0; str[i][k] == str[j][k] && str[i][k] != '\0'; k++);

            if (str[i][k] > str[j][k]) {

                for (k = 0; str[i][k] != '\0'; k++) {
                    temp[k] = str[i][k];
                }
                temp[k] = '\0';

                for (k = 0; str[j][k] != '\0'; k++) {
                    str[i][k] = str[j][k];
                }
                str[i][k] = '\0';

                for (k = 0; temp[k] != '\0'; k++) {
                    str[j][k] = temp[k];
                }
                str[j][k] = '\0';
            }
        }
    }

    printf("Strings in alphabetical order:\n");

    for (i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}