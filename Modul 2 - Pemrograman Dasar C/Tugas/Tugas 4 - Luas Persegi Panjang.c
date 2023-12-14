/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int main() {
	//Membuat variabel
	int panjang = 10; 
	int lebar = 5; // Untuk memperkenalkan komputer dengan variable Nama
	int luas;	

printf("                __      __   ___  __   __   ___  __        __                            __ \n"); 
printf("|    |  |  /\\  /__`    |__) |__  |__) /__` |__  / _` |    |__)  /\\  |\\ |    |  /\\  |\\ | / _`\n"); 
printf("|___ \\__/ /~~\\ .__/    |    |___ |  \\ .__/ |___ \\__> |    |    /~~\\ | \\| \\__/ /~~\\ | \\| \\__>\n"); 
printf("----------------------------------------------------------------------------------------------\n");
printf("\n");
                                                                                             

	luas = 2 * panjang + 2 * lebar;
	
	printf("Panjang persegi panjang : %d\n", panjang);
	printf("Lebar persegi panjang : %d\n", lebar);
	printf("Luas Persegi Panjang : 2 x %d + 2 x %d\n\n", panjang, lebar);

	printf("Jadi luas persegi panjang ialah : %i", luas); // Digunakan untuk membuat garis baru

	return 0;
}
