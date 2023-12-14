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

void Inputbarang (char NamaCustomer[], char NamaItem[], int *JumlahItem, float *HargaItem) {
    printf("Input Nama Anda: ");
    scanf("%s", NamaCustomer);

    printf("Input Nama Barang yang ingin anda beli: ");
    scanf("%s", NamaItem);
    
    printf("Input Jumlah Item yang anda beli: ");
    scanf("%i", JumlahItem);
    
    printf("Input Harga Item yang anda beli: ");
    scanf("%f", HargaItem);
}

float HargaT(int JumlahItem, float HargaItem, float HargaTotal) {
	return HargaItem * JumlahItem;
}

void TampilanOutput (char NamaCustomer[], char NamaItem[], int JumlahItem, float HargaItem, float HargaTotal) {
	
	float HargaTot = HargaT(JumlahItem, HargaItem, HargaTotal);
	
	printf("\n----------------------------------------\n");
	printf("Halo %s Semoga harinya berjalan dengan lancar ya...\n", NamaCustomer);
	printf("Barang yang anda beli adalah : %s\n", NamaItem);
	printf("Jumlah yang anda beli adalah : %ipcs\n", JumlahItem);
	printf("Harga barang yang anda beli adalah : Rp.%.2f\n", HargaItem);
	printf("Total harga barang adalah Rp.%.2f\n", HargaTot);
	printf("Terima kasih sudah menggunakan jasa belanja ini.");
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
