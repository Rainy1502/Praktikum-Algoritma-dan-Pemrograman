/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int main() {

    int detik, jam, menit, sisa_detik;

printf("      __             ___  __   __        __   ___ ___       \n"); 
printf("|__/ /  \\ |\\ | \\  / |__  |__) /__` |    |  \\ |__   |  | |__/\n"); 
printf("|  \\ \\__/ | \\|  \\/  |___ |  \\ .__/ |    |__/ |___  |  | |  \\ \n"); 
printf("--------------------------------------------------------------\n");
printf("\n");                                                

    printf("Masukkan jumlah waktu dalam detik: ");
    scanf("%d", &detik);

    jam = detik / 3600;
    sisa_detik = detik % 3600;
    menit = sisa_detik / 60; 
    sisa_detik %= 60;

    printf("Hasil Output: %d Jam, %d Menit, %d Detik\n", jam, menit, sisa_detik);

    return 0;
}
