/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int main() {
	//Membuat variabel
	int alas = 8; 
	int tinggi = 5; // Untuk memperkenalkan komputer dengan variable Nama
	int luas;	

	// Sebuah Judul dari Program
	printf("      ___       __         ___            __                     __      __   ___  __    ___    __      \n"); 
	printf("|\\/| |__  |\\ | / _` |__| |  |  |  | |\\ | / _`    |    |  |  /\\  /__`    /__` |__  / _` |  |  | / _`  /\\ \n"); 
	printf("|  | |___ | \\| \\__> |  | |  |  \\__/ | \\| \\__>    |___ \\__/ /~~\\ .__/    .__/ |___ \\__> |  |  | \\__> /~~\\ \n"); 
	printf("------------------------------------------------------------------------------------------------------------");
	printf("\n");

	// Mencari haisl dari luas
	luas = 0.5 * alas * tinggi;
	
	printf("Alas segitiga : %d\n", alas);
	printf("Tinggi segitiga : %d\n", tinggi);

	printf("Luas Segitiga : 0.5 x %d x %d\n\n", alas, tinggi);
	printf("Jadi luas segitiga ialah : %i", luas); 

	return 0;
}
