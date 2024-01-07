#include <stdio.h>
int star(int n)
{
    int line;
    for (int l = 1; l <= n; l++) {
        line=l;
        for (int s = 0; s < line; s++) {
        printf("*");
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    star(n);
    return 0;
}


