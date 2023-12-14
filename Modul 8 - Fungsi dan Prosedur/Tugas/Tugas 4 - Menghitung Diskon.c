/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

float potong(float total_pembelian) {
    float diskon = 0.0;

    if (total_pembelian > 1000000 && total_pembelian < 3000000) {
        diskon = 0.2; // Diskon 20%
    } else if (total_pembelian >= 3000000) {
        diskon = 0.35; // Diskon 35%
    }

    return diskon * total_pembelian;
}

void judul() {
printf("      ___       __         ___            __      __     __        __       \n");
printf("|\\/| |__  |\\ | / _` |__| |  |  |  | |\\ | / _`    |  \\ | /__` |__/ /  \\ |\\ | \n");
printf("|  | |___ | \\| \\__> |  | |  |  \\__/ | \\| \\__>    |__/ | .__/ |  \\ \\__/ | \\| \n");
printf("----------------------------------------------------------------------------\n");                                                                            
}

int main() {
    float total_pembelian, besar_diskon, total_bayar;

    judul();
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : Rp.");
    scanf("%f", &total_pembelian);

    besar_diskon = potong(total_pembelian);
    total_bayar = total_pembelian - besar_diskon;

    printf("Besar Diskon : Rp.%.0f\n", besar_diskon);
    printf("Besar Yang Harus Dibayarkan : Rp.%.0f\n", total_bayar);

    return 0;
}
