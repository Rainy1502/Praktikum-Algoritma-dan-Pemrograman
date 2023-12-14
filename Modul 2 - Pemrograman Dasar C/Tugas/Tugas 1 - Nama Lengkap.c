/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h> //Pustaka kode

int main() { //Pembuka
	
	// Sebuah judul dari program
	printf("                              ___       __             __ \n"); 
	printf("|\\ |  /\\   |\\/|  /\\     |    |__  |\\ | / _` |__/  /\\  |__)\n"); 
	printf("| \\| /~~\\  |  | /~~\\    |___ |___ | \\| \\__> |  \\ /~~\\ |   \n");
	printf("-----------------------------------------------------------\n");
	printf("\n");

	//Membuat variabel
	char Nama[343]; // Untuk memperkenalkan komputer dengan variable Nama
	printf ("Hello, siapa nama lengkapmu?: "); 
	scanf ("%[^\n]s", &Nama); // %s digunakan untuk menampilkan hasil sebuah teks &Nama bakal ngedireksi ke char Nama
	
	printf("Selamat Datang %s dalam Pemrograman C!\n", Nama); // \n Digunakan untuk membuat garis baru
}
