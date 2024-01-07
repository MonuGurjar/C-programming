#include <stdio.h>

void dectobin(int n)
{
    int binary[32],i=0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int Num;
    printf("Enter a number: ");
    scanf("%d", &Num);
    printf("Binary equivalent: ");
    dectobin(Num);
    return 0;
}