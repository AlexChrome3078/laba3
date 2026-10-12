#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define D 2.54
#define M 2.32
#define S 7.46

int zad1();
int zad2();
int zad3();

int main()
{
    setlocale(LC_ALL, "RUS");

    /* zad1(); */
    /* zad2(); */
    zad3();

    return 0;
}

int zad1()
{
    int num1, num2;

    printf("Введите число №1: ");
    if (scanf("%d", &num1) != 1)
        return 1;

    printf("Введите число №2: ");
    if (scanf("%d", &num2) != 1)
        return 1;

    printf("Введённые числа: %d и %d\n", num1, num2);
    printf("Сложение: %d\n", num1 + num2);
    printf("Вычитание: %d\n", num1 - num2);
    printf("Умножение: %d\n", num1 * num2);

    if (num1 != 0)
        printf("Деление: %.2f\n", (float)num2 / num1);
    else
        printf("Деление невозможно: первое число равно нулю.\n");

    if (num2 != 0)
        printf("Остаток от деления: %d\n", num1 % num2);
    else
        printf("Нельзя вычислить остаток: второе число равно нулю.\n");

    return 0;
}

int zad2()
{
    int dym;
    float result;

    puts("Введите значение в дюймах:");
    if (scanf("%d", &dym) != 1)
        return 1;

    result = D * dym;

    printf("%d дюймов = %.1f сантиметров\n", dym, result);
    printf("%d испанских дюймов = %.1f сантиметров\n", dym, M * dym);
    printf("%d старолитовских дюймов = %.1f сантиметров\n", dym, S * dym);

    return 0;
}

int zad3()
{
    int A, B;

    printf("Введите значение числа A: ");
    if (scanf("%d", &A) != 1)
        return 1;

    printf("Введите значение числа B: ");
    if (scanf("%d", &B) != 1)
        return 1;

    printf("________________________________________________________________________________\n");
    printf("|%14s      |%14s      |%14s      |\n", "a * b", "a + b", "a - b");
    printf("________________________________________________________________________________\n");
    printf("|%9d * %1d       |%9d + %1d       |%9d - %1d       |\n",
           A, B, A, B, A, B);
    printf("________________________________________________________________________________\n");
    printf("|%13d       |%13d       |%13d       |\n", A * B, A + B, A - B);
    printf("________________________________________________________________________________\n");

    return 0;
}
