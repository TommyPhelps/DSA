#include <stdio.h>

int main() {
    int numbers[] = {37, 29, 49, 28, 59, 32, 23, 22, 99, 33, 66};
    int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < numbersSize; i++) {
        for (int i = 0; i < numbersSize; i++) {
            int firstNum = numbers[i];
            int secondNum = numbers[i + 1];
            
            if (firstNum > secondNum) {
                numbers[i] = secondNum;
                numbers[i + 1] = firstNum;     
            } else {
                continue;
            }
        }
    }
    for (int i = 0; i < numbersSize; i++) {
        printf("%i\t",numbers[i]);
    }
}