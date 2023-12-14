/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    int jumlahMahasiswa;

    printf("        __       ___                                                  __     __            \n");
    printf("| |\\ | |__) |  |  |     |\\ |  /\\   |\\/|  /\\      |\\/|  /\\  |__|  /\\  /__` | /__` |  |  /\\  \n");
    printf("| | \\| |    \\__/  |     | \\| /~~\\  |  | /~~\\     |  | /~~\\ |  | /~~\\ .__/ | .__/ |/\\| /~~\\ \n");
    printf("-------------------------------------------------------------------------------------------\n");
                                                                                           
    printf("Input banyak siswa: ");
    scanf("%d", &jumlahMahasiswa);
    
    char namaMahasiswa[jumlahMahasiswa][50];
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        printf("Input nama mahasiswa %d: ", i + 1);
        scanf("%s", namaMahasiswa[i]);
    }
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, namaMahasiswa[i]);
    }

    return 0;
}
