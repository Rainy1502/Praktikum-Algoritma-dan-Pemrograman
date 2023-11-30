#include <stdio.h>

int main() {
	float celcius, kelvin, fahrenheit, reamur;
	
	printf("\t Program Konversi dari Celcius ke Berbagai Macam Satuan Suhu \n");
	printf("\t ------------------------------------------------------------\n");
	printf("\nInput Suhu Yang Ingin Dikonversikan (Dalam Format Celcius) : ");
	scanf("%f", &celcius);
	
	kelvin = celcius + 273.15;
	fahrenheit = (celcius * 1.8) + 32;
	reamur = celcius * 0.8;
	
	printf("\nSuhu dalam kelvin : %.2fk\n", kelvin);
	printf("\nSuhu dalam fahrenheit : %.2ff\n", fahrenheit);
	printf("\nSuhu dalam reamur : %.2fr", reamur);
	
	return 0;
}
