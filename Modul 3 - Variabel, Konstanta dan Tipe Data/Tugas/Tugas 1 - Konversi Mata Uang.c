/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int main() {
	float rupiah, dollar, hasil_konversi;
	char uang;
	
printf("      __             ___  __   __                  ___                         __ \n"); 
printf("|__/ /  \\ |\\ | \\  / |__  |__) /__` |     |\\/|  /\\   |   /\\     |  |  /\\  |\\ | / _`\n"); 
printf("|  \\ \\__/ | \\|  \\/  |___ |  \\ .__/ |     |  | /~~\\  |  /~~\\    \\__/ /~~\\ | \\| \\__>\n"); 
printf("------------------------------------------------------------------------------------\n");
printf("\n");
                                                                                   

	printf("\t Penjelasan cara penggunaan \n");
	printf("\t ---------------------------\n");
	printf("\nInput R : untuk mengkonversi mata uang Rp ke USD \n");
	printf("Input D : untuk mengkonversi mata uang USD ke Rp \n");
	printf("\nKetik jenis mata uang yang ingin anda konversikan (R/D) : ");
	scanf("%s", &uang);
	
	if (uang == 'R') {
		printf("\nKetikkan jumlah nominal yang ingin anda konversi : Rp.");
		scanf("%f", &rupiah);
		hasil_konversi = rupiah / 14250;
		printf("\n Hasil konversi dari Rp.%.2f ialah %.2f$ ", rupiah, hasil_konversi);
	}
	
	else if (uang == 'D') {
		printf("\nKetikkan jumlah nominal yang ingin anda konversi : ");
		scanf("%f", &dollar);
		hasil_konversi = dollar * 14250;
		printf("\n Hasil konversi dari %.2f$ ialah Rp.%.2f", dollar, hasil_konversi);
	}
	
	else {
		printf("\nTidak terbaca\n");
		printf("\nCoba di Input kembali dengan input yg benar...");
	}
	
	return 0;
}
