#include <stdio.h>

int main() {
    int number, sum = 0;

    scanf("%d", &number);
  
    if (number >= 10000 && number <= 99999) {
        while (number > 0) {
            sum += number % 10;  
            number /= 10;        
        }
        printf("%d\n", sum);
    } else {
        printf("Invalid input. Please enter a five-digit number.\n");
    }

    return 0;
}
