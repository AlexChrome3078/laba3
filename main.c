#include <stdio.h>

int main() {
    double price;
    double price_plus;
    double price_percent;

    printf("Введите исходную цену товара: ");
    if (scanf("%lf", &price) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }

    price_plus = price + 12.50;
    price_percent = price * 1.25;

    printf("Цена после увеличения на 12.50: %.2f\n", price_plus);
    printf("Цена после увеличения на 25%%: %.2f\n", price_percent);

    return 0;
}
