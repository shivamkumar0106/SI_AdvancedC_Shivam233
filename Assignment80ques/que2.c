#include<stdio.h>

int main(){

    int integer;
    float flt;
    char character;
    
    printf("Enter an integer, a float and a char: \n");
    scanf("%d %f %c", &integer, &flt, &character);

    printf("Integer : %d\n",integer);
    printf("Float number : %f\n",flt);
    printf("Character : %c\n",character);

    return 0;
}