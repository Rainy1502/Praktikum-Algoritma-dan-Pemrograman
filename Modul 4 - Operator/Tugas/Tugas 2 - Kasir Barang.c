/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

/* Pada Latihan 2 ini saya menggunakan fungsi dikarenakan penasaran setelah mempelajarinya di matkul
                                        Algoritma Pemrograman                                      */

void judul() {
    printf("           __     __      __        __             __ \n"); 
    printf("|__/  /\\  /__` | |__)    |__)  /\\  |__)  /\\  |\\ | / _`\n"); 
    printf("|  \\ /~~\\ .__/ | |  \\    |__) /~~\\ |  \\ /~~\\ | \\| \\__>\n"); 
    printf("--------------------------------------------------------");
    printf("\n");                                          
}

void Inputbarang (char NamaCustomer[], char NamaBarang[], int *JumlahBarang, float *HargaBarang) {
    printf("Input Nama Anda: ");
    scanf("%s", NamaCustomer);

    printf("Input Nama Barang yang ingin anda beli: ");
    scanf("%s", NamaBarang);
    
    printf("Input Jumlah Barang yang anda beli: ");
    scanf("%i", JumlahBarang);
    
    printf("Input Harga Barang yang anda beli: ");
    scanf("%f", HargaBarang);
}

float HargaT(int JumlahItem, float HargaItem, float HargaTotal) {
	return HargaItem * JumlahItem;
}

void TampilanOutput (char NamaCustomer[], char NamaBarang[], int JumlahBarang, float HargaBarang, float HargaTotal) {
	
	float HargaTot = HargaT(JumlahBarang, HargaBarang, HargaTotal);
	
	printf("\n----------------------------------------\n");
	printf("Nama Pembeli       : %s\n", NamaCustomer);
	printf("Nama Barang        : %s	\n", NamaBarang);
	printf("Jumlah Barang      : %ipcs	\n", JumlahBarang);
	printf("Harga barang       : Rp.%.2f\n", HargaBarang);
	printf("Total harga barang : Rp.%.2f\n", HargaTot);
}

int main() {
    char NamaPembeli[100], NamaBarang[100];
    int JumlahBarang;
    float HargaBarang, HargaTotal;

    judul();
    Inputbarang(NamaPembeli, NamaBarang, &JumlahBarang, &HargaBarang);
    TampilanOutput(NamaPembeli, NamaBarang, JumlahBarang, HargaBarang, HargaTotal);

    return 0;
}
