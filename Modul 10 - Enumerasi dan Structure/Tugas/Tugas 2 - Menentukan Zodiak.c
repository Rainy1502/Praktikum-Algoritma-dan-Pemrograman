/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

struct datatglLahir {
    int tgllahir;
    int blnlahir;
};

struct Zodiak {
    int awalHari;
    int awalBulan;
    int akhirHari;
    int akhirBulan;
    const char* name;
};

const char* tentukanZodiak(int day, int month, struct Zodiak zodiacs[], int totalZodiacs) {
    for (int i = 0; i < totalZodiacs; i++) {
        if ((month == zodiacs[i].awalBulan && day >= zodiacs[i].awalHari) ||
            (month == zodiacs[i].akhirBulan && day <= zodiacs[i].akhirHari)) {
            return zodiacs[i].name;
        }
    }
    return "tidak ditemukan";
}

void judul() {
printf("      ___       ___      ___                        __  __   __              \n");
printf("|\\/| |__  |\\ | |__  |\\ |  |  |  | |__/  /\\  |\\ |     / /  \\ |  \\ |  /\\  |__/ \n");
printf("|  | |___ | \\| |___ | \\|  |  \\__/ |  \\ /~~\\ | \\|    /_ \\__/ |__/ | /~~\\ |  \\ \n");
printf("-----------------------------------------------------------------------------\n");                                                                              
}

int main() {
    struct datatglLahir data;

    judul();
    printf("Masukkan Tanggal Lahir Anda [Tanggal-Bulan]: ");
    scanf("%d-%d", &data.tgllahir, &data.blnlahir);

    struct Zodiak zodiacs[] = {
        {21, 3, 19, 4, "Aries"},
        {20, 4, 20, 5, "Taurus"},
        {21, 5, 20, 6, "Gemini"},
        {21, 6, 22, 7, "Cancer"},
        {23, 7, 22, 8, "Leo"},
        {23, 8, 22, 9, "Virgo"},
        {23, 9, 22, 10, "Libra"},
        {23, 10, 21, 11, "Scorpio"},
        {22, 11, 21, 12, "Sagittarius"},
        {22, 12, 19, 1, "Capricorn"},
        {20, 1, 18, 2, "Aquarius"},
        {19, 2, 20, 3, "Pisces"}
    };
    
    const char *zodiak = tentukanZodiak(data.tgllahir, data.blnlahir, zodiacs, sizeof(zodiacs) / sizeof(zodiacs[0]));

    printf("Zodiak Anda adalah: %s\n", zodiak);

    return 0;
}
