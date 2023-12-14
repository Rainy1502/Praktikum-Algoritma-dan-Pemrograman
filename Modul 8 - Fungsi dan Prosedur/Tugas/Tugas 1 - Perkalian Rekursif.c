/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int perkalianRekursif(int a, int b) {

    if (a == 0 || b == 0) {
        return 0;
    }

    else if (b == 1) {
        return a;
    }

    else {
        return a + perkalianRekursif(a, b - 1);
    }
}

void judul() {
printf(" __   ___  __                                 __   ___            __   __     ___ \n");
printf("|__) |__  |__) |__/  /\\  |    |  /\\  |\\ |    |__) |__  |__/ |  | |__) /__` | |__  \n");
printf("|    |___ |  \\ |  \\ /~~\\ |___ | /~~\\ | \\|    |  \\ |___ |  \\ \\__/ |  \\ .__/ | |    \n");
printf("----------------------------------------------------------------------------------\n");
                                                                                  
}

int main() {
    int bilangan1, bilangan2;
    
    judul();
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bilangan1);
    
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bilangan2);

    int hasil = perkalianRekursif(bilangan1, bilangan2);
    printf("Hasil perkalian: %d x %d = %d\n", bilangan1, bilangan2, hasil);
    
    return 0;
}
