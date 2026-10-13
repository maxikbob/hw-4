#include <stdio.h>

int main() {
    int A, B;
    int condition;

    printf("Введите два числа (A и B): ");
    scanf("%d %d", &A, &B);

    condition = (A % 2 == 0 && B % 2 != 0) ||
                (A % 2 != 0 && B % 2 == 0);

    printf("Кофе можно пить (1 - да, 0 - нет): %d\n", condition);

    return 0;
}