#include <stdio.h>

int main() {
    int temp, num, n1, n2, n3, sum;

    printf("Enter a number to check if it is an Armstrong number: ");
    scanf("%d", &num);

    temp = num;
    n1 = num / 100;
    num = num % 100;
    n2 = num / 10;
    num = num % 10;
    n3 = num;

    sum = n1 * n1 * n1 + n2 * n2 * n2 + n3 * n3 * n3;

    if (sum == temp) {
        printf("\nGiven Number is Armstrong Number: %d\n", temp);
    } else {
        printf("\nGiven Number is Not Armstrong Number: %d\n", temp);
    }

    return 0;
}