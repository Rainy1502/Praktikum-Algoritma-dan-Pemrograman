#include <stdio.h>
#include <string.h>

int main() {
	int BanyakMahasiswa = 0, Pengulangan;
	char NamaMahasiswa[20];
	
    printf("\t\tProgram penampung input nama mahasiswa\n");
    printf("\t\t--------------------------------------\n\n");
    
    printf("Masukkan berapa nama mahasiswa yang akan anda input : ");
    scanf("%i", &BanyakMahasiswa);
    printf ("Masukkan nama untuk %i mahasiswa \n", BanyakMahasiswa);
    fflush(stdin);
    for (int i = 0; i < BanyakMahasiswa; i++) {
    	printf("Masukkan nama untuk mahasiswa ke-%d : ", i+1);
    	fgets(NamaMahasiswa, sizeof(NamaMahasiswa), stdin);
        NamaMahasiswa[strcspn(NamaMahasiswa, "\n")] = '\0'; // remove the newline character
    }
    printf("Daftar nama mahasiswa:\n");
    
    for (int i = 0; i < BanyakMahasiswa; i++) {
        printf("Nama mahasiswa ke-%d adalah: %s\n", i+1, NamaMahasiswa[i]); // corrected line
    }
    return 0;
}

	
    /*int nilairata2[20] = {80, 50, 60, 72, 56, 82, 90, 94, 45, 48, 
						  80 , 70, 75, 88, 80, 60, 82, 84, 65, 75};
    int total = 0;
    float rata2;
    
    printf("\t\tProgram menghitung rata - rata nilai dari mahasiswa\n");
    printf("\t\t---------------------------------------------------\n\n");
    
    printf("\t\t+-----------------------+\n");
    printf("\t\t| No.  | Nilai Mahasiswa|\n");
    printf("\t\t+-----------------------+\n");
    for(int i = 0; i < 20; i++){
        printf("\t\t| %-4d | %-14d |\n", i+1, nilairata2[i]);
        total += nilairata2[i];
    }
    printf("\t\t+-----------------------+\n");
    
    rata2 = (float) total / 20;
    
    printf("-----------------------------------------------------------");
    printf("\nRata - rata nilai dari 20 mahasiswa tersebut ialah : %.2f\n", rata2);
    
    return 0;
    */

