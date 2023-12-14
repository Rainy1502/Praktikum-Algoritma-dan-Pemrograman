/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

float penjumlahan(float angka1, float angka2) {
    return angka1 + angka2;
}

float pengurangan(float angka1, float angka2) {
    return angka1 - angka2;
}

float perkalian(float angka1, float angka2) {
    return angka1 * angka2;
}

float pembagian(float angka1, float angka2) {
    if (angka2 == 0) {
        printf("Error: Pembagian dengan nol tidak bisa dilakukan.\n");
        return -1;
    } else {
        return angka1 / angka2;
    }
}

void judul(){
printf(" __   ___  __         ___            __                     __    ___            ___        \n");
printf("|__) |__  |__) |__| |  |  |  | |\\ | / _`  /\\  |\\ |     /\\  |__) |  |   |\\/|  /\\   |  | |__/ \n");
printf("|    |___ |  \\ |  | |  |  \\__/ | \\| \\__> /~~\\ | \\|    /~~\\ |  \\ |  |   |  | /~~\\  |  | |  \\ \n");
printf("--------------------------------------------------------------------------------------------\n");                                                                          
}

int main() {
    int pilih; 
    float angka1, angka2;

    judul();
    printf("Menu :\n");
    printf("1. Pertambahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Masukkan pilihan Anda : ");
    scanf("%d", &pilih); 

    printf("Masukkan angka ke-1: ");
    scanf("%f", &angka1);
    printf("Masukkan angka ke-2: ");
    scanf("%f", &angka2);

    switch (pilih) {
        case 1 : 
            printf("Penjumlahan: %.2f\n", penjumlahan(angka1, angka2));
            break;
        case 2 :
            printf("Pengurangan: %.2f\n", pengurangan(angka1, angka2));
            break;
        case 3 :
            printf("Perkalian: %.2f\n", perkalian(angka1, angka2));
            break;
        case 4 :
            printf("Pembagian: %.2f\n", pembagian(angka1, angka2));
            break;
        default :
            printf("Pilihan tidak ada");
            break;
    }
    return 0;
}