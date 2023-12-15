/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    int BanyakMahasiswa = 0;
    int c;
    char NamaMahasiswa[BanyakMahasiswa][20];

printf(" __   ___                  __             __                                                   __     __            \n");
printf("|__) |__  |\\ |  /\\   |\\/| |__) |  | |\\ | / _`    |\\ |  /\\   |\\/|  /\\      |\\/|  /\\  |__|  /\\  /__` | /__` |  |  /\\  \n");
printf("|    |___ | \\| /~~\\  |  | |    \\__/ | \\| \\__>    | \\| /~~\\  |  | /~~\\     |  | /~~\\ |  | /~~\\ .__/ | .__/ |/\\| /~~\\ \n");
printf("---------------------------------------------------------------------------------------------------------------------\n");
printf("\n");
                                                                                                                    
    printf("Masukkan berapa nama mahasiswa yang akan anda input : ");
    scanf("%i", &BanyakMahasiswa);

    while ((c = getchar()) != '\n' && c != EOF);
    printf("Masukkan nama untuk %i mahasiswa\n", BanyakMahasiswa);
    for (int i = 0; i < BanyakMahasiswa; i++) {
        printf("Masukkan nama untuk mahasiswa ke-%d : ", i + 1);
        int j = 0;
        while ((NamaMahasiswa[i][j] = getchar()) != '\n' && j < sizeof(NamaMahasiswa[i]) - 1) {
            j++;
        }
    }

    printf("\nDaftar nama mahasiswa:\n");
    for (int i = 0; i < BanyakMahasiswa; i++) {
        printf("Nama mahasiswa ke-%d adalah: %s", i + 1, NamaMahasiswa[i]);
    }

    return 0;
}