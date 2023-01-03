#include <stdio.h>

int main(){
    int number;

    printf("Enter a value: ");
    scanf("%d", &number);

    while(number != 1){
        if (number % 2 == 1)
            number = number*3 + 1;
        else
            number = number / 2;        
        printf("%d ", number);
    }
    return 0;
}