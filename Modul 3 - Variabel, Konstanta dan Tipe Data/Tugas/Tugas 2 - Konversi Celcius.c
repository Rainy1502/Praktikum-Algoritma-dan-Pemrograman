/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int main() {
	float celcius, kelvin, fahrenheit, reamur;
	
printf("      __             ___  __   __        __   ___       __          __ \n"); 
printf("|__/ /  \\ |\\ | \\  / |__  |__) /__` |    /  ` |__  |    /  ` | |  | /__`\n"); 
printf("|  \\ \\__/ | \\|  \\/  |___ |  \\ .__/ |    \\__, |___ |___ \\__, | \\__/ .__/\n");
printf("-------------------------------------------------------------------------\n");
printf("\n");                                                           

	printf("Input Suhu Yang Ingin Dikonversikan (Dalam Format Celcius) : ");
	scanf("%f", &celcius);
	
	kelvin = celcius + 273.15;
	fahrenheit = (celcius * 1.8) + 32;
	reamur = celcius * 0.8;
	
	printf("\nSuhu dalam kelvin : %.2fK", kelvin);
	printf("\nSuhu dalam fahrenheit : %.2fF", fahrenheit);
	printf("\nSuhu dalam reamur : %.2fR", reamur);
	
	return 0;
}
