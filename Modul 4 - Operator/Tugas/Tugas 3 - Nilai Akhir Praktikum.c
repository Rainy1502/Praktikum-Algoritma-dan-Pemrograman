/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int main() {
	float nilaipre = 85, nilaipra = 65, nilaiuts = 80, nilaiuas = 75, nilaiakh;

printf("                                        __      __   __            ___                  \n"); 
printf("|\\ | | |     /\\  |     /\\  |__/ |__| | |__)    |__) |__)  /\\  |__/  |  | |__/ |  |  |\\/|\n"); 
printf("| \\| | |___ /~~\\ |    /~~\\ |  \\ |  | | |  \\    |    |  \\ /~~\\ |  \\  |  | |  \\ \\__/  |  |\n");
printf("-----------------------------------------------------------------------------------------");
                                                                                         
	nilaiakh = nilaipre * 0.10 + nilaipra * 0.20 + nilaiuts * 0.30 + nilaiuas * 0.40; 
	printf("\nNilai presensi : %.0f\n", nilaipre);
	printf("Nilai praktikum : %.0f\n", nilaipra);
	printf("Nilai UTS : %.0f\n", nilaiuts);
	printf("Nilai UAS : %.0f\n", nilaiuas);
	printf("Untuk menentukan nilai akhir : \n");
	printf("%.f x 0.10 + %.f x 0.20 + %.f x 0.30 + %.f x 0.40\n", nilaipre, nilaipra, nilaiuts, nilaiuas);
	printf("\nNilai akhir : %.1f", nilaiakh);
	
	return 0;
}
