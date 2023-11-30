#include <stdio.h>

int main() {
	float volume, luas_permukaan;
	float diameter = 12;
	float phi = 3.14;
	
	printf("\t Menghitung Volume dan Luas Permukaan Bola Basket \n");
	printf("\t ------------------------------------------------\n");
	printf("\nDiameter bola basket adalah %.0f\n", diameter);
	
	printf("\nMaka dilakukan operasi 1.33 * %.2f * %.0f * %.0f * %.0f untuk mendapatkan hasil Volume Bola Basket", phi, diameter, diameter, diameter);
	
	volume = 1.33 * phi * diameter * diameter * diameter;
	
	printf("\nVolume bola basket adalah : %.2f\n", volume);
	printf("\nOperasi 4 * %.2f * %.0f * %.0f untuk mendapatkan hasil Luas Permukaan Bola Basket", phi, diameter, diameter);
	
	luas_permukaan = 4 * phi * diameter * diameter;
	
	printf("\nLuas Permukaan Bola Basket Adalah : %.2f\n", luas_permukaan);
	
	return 0;
}
