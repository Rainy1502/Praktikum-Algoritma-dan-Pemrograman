#include <stdio.h>

int main() {
	float nilaipre = 85, nilaipra = 65, nilaiuts = 80, nilaiuas = 75, nilaiakh;
	
	nilaiakh = nilaipre / 0.10 + nilaipra * 0.20 + nilaiuts * 0.30 + nilaiuas * 0.40; 
	
	printf("\tNilai akhir Praktikum\n");
	printf("\t----------------------\n");
	
	printf("\n--------------------------------");
	printf("\nNilai presensi : %.0f\n", nilaipre);
	printf("Nilai praktikum : %.0f\n", nilaipra);
	printf("Nilai UTS : %.0f\n", nilaiuts);
	printf("Nilai UAS : %.0f\n", nilaiuas);
	printf("Nilai akhir : %.1f", nilaiakh);
	
	return 0;
}
