/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>
#include <string.h>

int main() {

printf(" __   __   __                  __  \n");
printf("|__) /  \\ |__) |     /\\  |\\ | |  \\ \n");
printf("|__) \\__/ |  \\ |___ /~~\\ | \\| |__/ \n");
printf("-----------------------------------\n");
                                   

    char str[] = "BORLAND";
    int len = strlen(str);

    char *ptr = &str[len - 1]; // pointer menunjuk ke karakter terakhir dari string

    for (int i = len - 1; i >= 0; i--) {
        for (int j = len - 1; j >= i; j--) {
            printf("%c", *(ptr - j + i));
        }
        printf("\n");
    }

    return 0;
}
