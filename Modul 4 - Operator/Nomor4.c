#include <stdio.h>
#include <string.h>

int main() {
	int JamN = 3, tarifpj = 15000, biaya;
	
	biaya = tarifpj * JamN;
	
	printf("\tProgram Rental Film\n");
	printf("\t--------------------\n");
	
	printf("\n---------------------------------------------\n");
	printf("Total waktu kamu menonton adalah : %i\n", JamN);
	printf("Tarif per-jam = %i\n", tarifpj);
	printf("Biaya yang harus kamu bayar adalah = %i", biaya);

	
}
