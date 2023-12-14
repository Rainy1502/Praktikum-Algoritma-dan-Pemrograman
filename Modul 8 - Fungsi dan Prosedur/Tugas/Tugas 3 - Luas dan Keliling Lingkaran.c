/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

float luas(float radius) {
    return 3.14 * radius * radius; 
}

float keliling(float radius) {
    return 2 * 3.14 * radius; 
}

void judul() {
printf("                __      __                     ___                     __                  __             __            \n");
printf("|    |  |  /\\  /__`    |  \\  /\\  |\\ |    |__/ |__  |    | |    | |\\ | / _`    |    | |\\ | / _` |__/  /\\  |__)  /\\  |\\ | \n");
printf("|___ \\__/ /~~\\ .__/    |__/ /~~\\ | \\|    |  \\ |___ |___ | |___ | | \\| \\__>    |___ | | \\| \\__> |  \\ /~~\\ |  \\ /~~\\ | \\| \n");
printf("------------------------------------------------------------------------------------------------------------------------\n");                                                                                                                        
}

int main() {
    float radius;
    
    judul();
    printf("Masukkan panjang jari-jari lingkaran: ");
    scanf("%f", &radius);
    
    printf("Luas lingkaran: %.2f\n", luas(radius));
    printf("Keliling lingkaran: %.2f\n", keliling(radius));
    
    return 0;
}
