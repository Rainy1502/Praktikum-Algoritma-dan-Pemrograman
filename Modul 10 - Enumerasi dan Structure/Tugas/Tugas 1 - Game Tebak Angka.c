/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum angka {
    satu = 1, dua, tiga, empat, lima, enam, tujuh, delapan, sembilan, sepuluh,
    sebelas, duabelas, tigabelas, empatbelas, limabelas, enambelas, tujuhbelas,
    delapanbelas, sembilanbelas, dua_puluh
};

enum perbandingan {
    Terlalu_besar, Terlalu_kecil, Benar
};

void judul() {
    printf(" __              ___    ___  ___  __                          __            \n");
    printf("/ _`  /\\   |\\/| |__      |  |__  |__)  /\\  |__/     /\\  |\\ | / _` |__/  /\\  \n");
    printf("\\__> /~~\\  |  | |___     |  |___ |__) /~~\\ |  \\    /~~\\ | \\| \\__> |  \\ /~~\\ \n");
    printf("----------------------------------------------------------------------------\n");             
}

int main() {
    int tebakan;
    char pilihan;
    int percobaan = 0;
    enum angka angka, tebakan_enum;
    enum perbandingan hasil;
    srand(time(NULL));                                               

    do {
        percobaan = 0; 
        judul();

        angka = (enum angka)(rand() % dua_puluh + 1);

        do {
            percobaan++;
            printf("Masukkanlah tebakanmu : ");
            scanf("%d", &tebakan);
            tebakan_enum = (enum angka)tebakan; 

            if (tebakan_enum > angka) {
                hasil = Terlalu_besar;
            } else if (tebakan_enum < angka) {
                hasil = Terlalu_kecil;
            } else {
                hasil = Benar;
            }

            switch (hasil) {
                case Terlalu_besar:
                    printf("Angka kamu terlalu besar\n");
                    break;
                case Terlalu_kecil:
                    printf("Angka kamu terlalu kecil\n");
                    break;
                case Benar:
                    printf("Selamat, tebakan anda benar\n");
                    break;
            }
        } while (tebakan_enum != angka);

        printf("\nJumlah percobaan: %d\n\n", percobaan); 

        printf("Ingin mencoba lagi? (Y: Ya / T: Tidak): ");
        scanf(" %c", &pilihan);
    } while (pilihan == 'Y' || pilihan == 'y');

    printf("Terima kasih telah bermain!\n");
    return 0;
}
