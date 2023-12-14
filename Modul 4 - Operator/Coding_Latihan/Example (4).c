/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>
#define void int

void main(){
	int a, b;
	
	// Pengisian nilai dengan operator =
	a = 5;
	b = 10;
	
	// Pengisian sekaligus penambahan
	b += a; // ini sama seperti b = b + a
	printf("Hasil b += a adalah %d\n", b);
	
	// Pengisian sekaligus pengurangan
	b -= a; // ini sama seperti b = b - a;
	printf("Hasil b -= a adalah %d\n", b);
	
	// Pengisian sekaligus perkalian
	b *= a; // ini sama seperti b = b * a
	printf("Hasil b *= a adalah %d\n", b);
	
	// Pengisian sekaligus pembagian
	b /= a; // ini sama seperti b = b / a
	printf("Hasil b /= a adalah %d\n", b);
	
	// Pengisian sekaligus sisa bagi
	b %= a; // ini sama seperti b = b % a
	printf("Hasil b %= a adalah %d\n", b);
}
