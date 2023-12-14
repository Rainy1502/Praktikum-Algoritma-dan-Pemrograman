/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    int nilai[20]; 
    int i;
    float total = 0, rata_rata;

    printf(" __       ___          __       ___                               __     __            \n");
    printf("|__)  /\\   |   /\\  __ |__)  /\\   |   /\\      |\\/|  /\\  |__|  /\\  /__` | /__` |  |  /\\  \n");
    printf("|  \\ /~~\\  |  /~~\\    |  \\ /~~\\  |  /~~\\     |  | /~~\\ |  | /~~\\ .__/ | .__/ |/\\| /~~\\ \n");
    printf("---------------------------------------------------------------------------------------\n");
                                                                                       
    printf("Masukkan nilai untuk 20 mahasiswa:\n");
    for (i = 0; i < 20; i++) {
        printf("Nilai mahasiswa %d: ", i + 1);
        scanf("%d", &nilai[i]);
        total += nilai[i]; 
    }

    rata_rata = total / 20;
    printf("Rata-rata dari nilai 20 mahasiswa adalah: %.2f\n", rata_rata);

    return 0;
}
