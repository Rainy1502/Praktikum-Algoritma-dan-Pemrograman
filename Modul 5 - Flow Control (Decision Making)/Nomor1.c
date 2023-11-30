#include <stdio.h>

void penjumlahan(float num1, float num2) {
    float hasil;
    hasil = num1 + num2;
    printf("Hasil penjumlahan: %.2f\n", hasil);
}

void pengurangan(float num1, float num2) {
    float hasil;
    hasil = num1 - num2;
    printf("Hasil pengurangan: %.2f\n", hasil);
}

void perkalian(float num1, float num2) {
    float hasil;
    hasil = num1 * num2;
    printf("Hasil perkalian: %.2f\n", hasil);
}

void pembagian(float num1, float num2) {
    float hasil;
    if (num2 == 0) {
        printf("Error: Pembagian dengan nol!\n");
        return;
    }
    hasil = num1 / num2;
    printf("Hasil pembagian: %.2f\n", hasil);
}

void hasilBagi(float num1, float num2) {
    float hasil;
    hasil = num1 / num2;
    printf("Hasil bagi: %.2f\n", hasil);
}

void menu() {
    int pilihan;
    printf("MENU\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Hasil Bagi\n");
    printf("Pilihan: ");
    scanf("%d", &pilihan);
    switch (pilihan) {
        case 1:
            float num1, num2;
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &num1);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &num2);
            penjumlahan(num1, num2);
            break;
        case 2:
            float num3, num4;
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &num3);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &num4);
            pengurangan(num3, num4);
            break;
        case 3:
            float num5, num6;
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &num5);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &num6);
            perkalian(num5, num6);
            break;
        case 4:
            float num7, num8;
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &num7);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &num8);
            pembagian(num7, num8);
            break;
        case 5:
            float num9, num10;
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &num9);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &num10);
            hasilBagi(num9, num10);
            break;
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }
}

int main() {
    menu();
    return 0;
}