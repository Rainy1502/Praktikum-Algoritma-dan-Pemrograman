#include <stdio.h>

int main() {
	//Membuat variabel
	char nama[46], nim[42], prodi[33], fakultas[55];
	float  nilai_praktikum, nilai_uts, nilai_uas, nilai_akhir ; // Untuk memperkenalkan komputer dengan variable Nama
	
	printf ("\t\t\tSiapa namamu?:  "); 
	scanf ("%[^\n]s", &nama); // %s digunakan untuk menampilkan hasil sebuah teks &Nama bakal ngedireksi ke char Nama
	
	printf ("Berapa NIMmu ?: ");
	scanf ("%s", &nim); 
	
	printf ("Sebutkan asal prodi mu : ");
	scanf ("%s", &prodi);
	
	printf ("Sebutkan asal fakultas mu : ");
	scanf ("%s", &fakultas);
	
	printf ("Ketikkan nilai praktikum mu : ");
	scanf ("%f", &nilai_praktikum);
	
	printf ("Ketikkan nilai UTS mu: ");
	scanf ("%f", &nilai_uts);
	
	printf ("Ketikkan nilai UAS mu : ");
	scanf ("%f", &nilai_uas);
	
	nilai_akhir = 0.3 * nilai_praktikum + 0.3 * nilai_uts + 0.4 * nilai_uas;
	
	printf("\n------------------------------------\n");
	printf("Namamu adalah : %s\n", nama); // Digunakan untuk membuat garis baru
	printf("NIMmu adalah : %s\n", nim);
	printf("Asal prodimu adalah : %s\n", prodi);
	printf("Asal fakultas mu adalah : %s\n", fakultas);
	printf("Nilai praktikum mu adalah : %f\n", nilai_praktikum);
	printf("Nilai UTS mu adalah : %f\n", nilai_uts);
	printf("Nilai UAS mu adalah : %f\n", nilai_uas);
	printf("Nilai Akhir mu adalah : %f", nilai_akhir);

	return 0;
}
