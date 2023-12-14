/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];
    char usernameBenar[] = "Fattan";
    char usernameSalah[] = "#hey_352A";

printf("      __   __                  __   ___  __  \n");
printf("|    /  \\ / _` | |\\ |    |  | /__` |__  |__) \n");
printf("|___ \\__/ \\__> | | \\|    \\__/ .__/ |___ |  \\ \n");
printf("---------------------------------------------\n");

    printf("Masukkan username: ");
    scanf("%s", username);

    printf("Masukkan password: ");
    scanf("%s", password);

    if (strcmp(username, usernameBenar) == 0 && strcmp(password, usernameSalah) == 0) {
        printf("Login sukses!!\n");
    } else {
        printf("Password salah\n");
    }

    return 0;
}
