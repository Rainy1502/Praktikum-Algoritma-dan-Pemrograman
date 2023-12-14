/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100];

printf("                            ___    ___  ___  __   __                   \n");
printf("|__/  /\\  |    |  |\\/|  /\\   |      |  |__  |__) |__)  /\\  |    | |__/ \n");
printf("|  \\ /~~\\ |___ |  |  | /~~\\  |      |  |___ |  \\ |__) /~~\\ |___ | |  \\ \n");
printf("-----------------------------------------------------------------------\n");
                                                                       

    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    printf("\nKebalikannya: ");
    for (int i = strlen(kalimat) - 1; i >= 0; i--) {
        printf("%c", kalimat[i]);
    }

    return 0;
}
