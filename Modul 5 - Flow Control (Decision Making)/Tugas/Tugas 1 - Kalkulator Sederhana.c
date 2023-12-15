/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

/* Pada Latihan 1 ini saya menggunakan fungsi juga karena rasanya akan sangat membantu di program ini */

void judul() {
    printf("                                   ___  __   __      __   ___  __   ___  __                      \n");
    printf("|__/  /\\  |    |__/ |  | |     /\\   |  /  \\ |__)    /__` |__  |  \\ |__  |__) |__|  /\\  |\\ |  /\\  \n");
    printf("|  \\ /~~\\ |___ |  \\ \\__/ |___ /~~\\  |  \\__/ |  \\    .__/ |___ |__/ |___ |  \\ |  | /~~\\ | \\| /~~\\ \n");
    printf("---------------------------------------------------------------------------------------------------");
    printf("\n");                                                                                    
}

void penjumlahan(float angka1, float angka2) {
    float hasil;
    hasil = angka1 + angka2;
    printf("Hasil penjumlahan: %.2f\n", hasil);
}

void pengurangan(float angka1, float angka2) {
    float hasil;
    hasil = angka1 - angka2;
    printf("Hasil pengurangan: %.2f\n", hasil);
}

void perkalian(float angka1, float angka2) {
    float hasil;
    hasil = angka1 * angka2;
    printf("Hasil perkalian: %.2f\n", hasil);
}

void pembagian(float angka1, float angka2) {
    float hasil;
    if (angka2 == 0) {
        printf("Error: Pembagian dengan nol!\n");
        return;
    }
    hasil = angka1 / angka2;
    printf("Hasil pembagian: %.2f\n", hasil);
}

void hasilBagi(float angka1, float angka2) {
    float hasil;
    hasil = angka1 / angka2;
    printf("Hasil bagi: %.2f\n", hasil);
}

void menu() {
    float angka1, angka2;

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
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &angka1);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &angka2);
            penjumlahan(angka1, angka2);
            break;
        case 2:
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &angka1);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &angka2);
            pengurangan(angka1, angka2);
            break;
        case 3:
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &angka1);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &angka2);
            perkalian(angka1, angka2);
            break;
        case 4:
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &angka1);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &angka2);
            pembagian(angka1, angka2);
            break;
        case 5:
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &angka1);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &angka2);
            hasilBagi(angka1, angka2);
            break;
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }
}

int main() {
    judul();
    menu();
    return 0;
}