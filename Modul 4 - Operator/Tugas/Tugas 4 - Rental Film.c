/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int main() {
	int durasi = 3; 
    int tarif_pertama = 15000; 
    float diskon = 0.5; 
    int total = 0;

printf(" __   ___      ___               ___             \n"); 
printf("|__) |__  |\\ |  |   /\\  |       |__  | |     |\\/|\n"); 
printf("|  \\ |___ | \\|  |  /~~\\ |___    |    | |___  |  |\n"); 
printf("--------------------------------------------------");
printf("\n");                                                 
	
	total = durasi * tarif_pertama - ((durasi > 1) * (durasi - 1) * tarif_pertama * diskon);
	printf("Total waktu kamu menonton adalah : %i\n", durasi);
	printf("Tarif per-jam = %i\n", tarif_pertama);
	printf("Total yang harus dibayar: Rp %d\n", total);

	
}
