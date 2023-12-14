/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int main() {
	float volume, luas_permukaan;
	float diameter = 12;
	float phi = 3.14;
	
printf("      __                   ___     __                               __      __   ___  __                                     __        __        ___ ___\n"); 
printf("\\  / /  \\ |    |  |  |\\/| |__     |  \\  /\\  |\\ |    |    |  |  /\\  /__`    |__) |__  |__)  |\\/| |  | |__/  /\\   /\\  |\\ |    |__)  /\\  /__` |__/ |__   | \n"); 
printf(" \\/  \\__/ |___ \\__/  |  | |___    |__/ /~~\\ | \\|    |___ \\__/ /~~\\ .__/    |    |___ |  \\  |  | \\__/ |  \\ /~~\\ /~~\\ | \\|    |__) /~~\\ .__/ |  \\ |___  | \n"); 
printf("---------------------------------------------------------------------------------------------------------------------------------------------------------");
                                                                                                                                                         
	printf("\nDiameter bola basket adalah %.0f\n", diameter);
	printf("\nVolume bola basket : \n"); 
	printf("1.33 * %.2f * %.0f * %.0f * %.0f", phi, diameter, diameter, diameter);
	
	volume = 1.33 * phi * diameter * diameter * diameter;
	
	printf("\nVolume bola basket adalah : %.2f\n", volume);

	printf("\nLuas Permukaan Basket :");
	printf("\n4 * %.2f * %.0f * %.0f", phi, diameter, diameter);
	
	luas_permukaan = 4 * phi * diameter * diameter;
	
	printf("\nLuas Permukaan Bola Basket Adalah : %.2f\n", luas_permukaan);
	
	return 0;
}
