#include <stdio.h>

int main() {
	float rupiah, dollar, hasil_konversi;
	char uang;
	
	printf("\t Penjelasan cara penggunaan \n");
	printf("\t ---------------------------\n");
	printf("\nInput R : untuk mengkonversi mata uang Rp ke USD \n");
	printf("Input D : untuk mengkonversi mata uang USD ke Rp \n");
	printf("\nKetik jenis mata uang yang ingin anda konversikan (R/D) : ");
	scanf("%s", &uang);
	
	if (uang == 'R') {
		printf("\nKetikkan jumlah nominal yang ingin anda konversi : ");
		scanf("%f", &rupiah);
		hasil_konversi = rupiah / 14250;
		printf("\n Hasil konversi dari %2.f Rp ialah %2.f $ ", rupiah, hasil_konversi);
	}
	
	else if (uang == 'D') {
		printf("\nKetikkan jumlah nominal yang ingin anda konversi : ");
		scanf("%f", &dollar);
		hasil_konversi = dollar * 14250;
		printf("\n Hasil konversi ari %2.f $ ialah %2.f Rp", dollar, hasil_konversi);
	}
	
	else {
		printf("\nTidak terbaca\n");
		printf("\nCoba di Input kembali dengan input yg benar yakk... :)");
	}
	
	return 0;
}
