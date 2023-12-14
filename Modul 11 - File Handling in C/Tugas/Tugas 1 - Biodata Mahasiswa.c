/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

void judul () {
    printf(" __     __   __       ___                               __     __            \n");
    printf("|__) | /  \\ |  \\  /\\   |   /\\      |\\/|  /\\  |__|  /\\  /__` | /__` |  |  /\\  \n");
    printf("|__) | \\__/ |__/ /~~\\  |  /~~\\     |  | /~~\\ |  | /~~\\ .__/ | .__/ |/\\| /~~\\ \n");
    printf("-----------------------------------------------------------------------------\n");
}

int main() {

    judul();
    FILE *file;
    file = fopen("datamahasiswa.txt", "w"); 

    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return 1;
    }

    int jumlahMahasiswa;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);                                                                             
                                                                        
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        char nama[50], nim[20], jurusan[50], programStudi[50];

        printf("\nMasukkan data mahasiswa ke-%d\n", i + 1);
        printf("Nama: ");
        scanf(" %[^\n]s", nama); 
        printf("NIM: ");
        scanf(" %[^\n]s", nim);
        printf("Jurusan: ");
        scanf(" %[^\n]s", jurusan);
        printf("Program Studi: ");
        scanf(" %[^\n]s", programStudi);

        fprintf(file, "Data Mahasiswa ke-%d\n", i + 1);
        fprintf(file, "Nama: %s\n", nama);
        fprintf(file, "NIM: %s\n", nim);
        fprintf(file, "Jurusan: %s\n", jurusan);
        fprintf(file, "Program Studi: %s\n\n", programStudi);
    }

    fclose(file);
    printf("Data mahasiswa telah disimpan ke dalam file datamahasiswa.txt\n");

    return 0;
}
