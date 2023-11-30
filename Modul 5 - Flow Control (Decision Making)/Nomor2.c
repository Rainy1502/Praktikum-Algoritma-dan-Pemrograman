#include <stdio.h>
#include <string.h>

int main() {
    int nilairata2[20] = {80, 50, 60, 72, 56, 82, 90, 94, 45, 48, 
						  80 , 70, 75, 88, 80, 60, 82, 84, 65, 75};
    int total = 0;
    float rata2;
    
    printf("\t\tProgram menghitung rata - rata nilai dari mahasiswa\n");
    printf("\t\t---------------------------------------------------\n\n");
    
    // Digunakan untuk menampilkan tabel dari nilai mahasiswa beserta nomornya menggunakan pengulangan for
    printf("\t\t+-----------------------+\n");
    printf("\t\t| No.  | Nilai Mahasiswa|\n");
    printf("\t\t+-----------------------+\n");
    for(int i = 0; i < 20; i++){ // Dilakukan sebuah pengulangan hingga mencapai ke-20
        printf("\t\t| %-4d | %-14d |\n", i+1, nilairata2[i]); // %-4d digunakan untuk mengatur jarak dari nomor dan %-14d digunakan untuk nilai rata-rata
        total += nilairata2[i]; // Menghitung hasil dari rata-rata
    }
    printf("\t\t+-----------------------+\n");
    
    rata2 = (float) total / 20;
    
    printf("-----------------------------------------------------------");
    printf("\nRata - rata nilai dari 20 mahasiswa tersebut ialah : %.2f\n", rata2);
    
    return 0;
}
