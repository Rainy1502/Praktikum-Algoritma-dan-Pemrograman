#include <stdio.h>

#define E 0
#define D 45
#define C 56
#define B 66
#define B_PLUS 86
#define A 81
#define A_PLUS 91
#define TOTAL_SCORE 100
#define TOTAL_KEHADIRAN 20
#define TOTAL_TUGAS 20
#define TOTAL_UTS 25
#define TOTAL_UAS 35

int main() {
    float kehadiran, tugas, uts, uas, total, nilaiAkhir;

    // Input nilai kehadiran, tugas, uts, dan uas
    printf("Masukkan nilai kehadiran: ");
    scanf("%f", &kehadiran);
    printf("Masukkan nilai tugas: ");
    scanf("%f", &tugas);
    printf("Masukkan nilai UTS: ");
    scanf("%f", &uts);
    printf("Masukkan nilai UAS: ");
    scanf("%f", &uas);

    // Hitung total nilai
    total = TOTAL_KEHADIRAN * kehadiran / 100 + TOTAL_TUGAS * tugas / 100 + TOTAL_UTS * uts / 100 + TOTAL_UAS * uas / 100;

    // Hitung nilai akhir
    nilaiAkhir = total / TOTAL_SCORE * 100;

    // Cetak keterangan hasil kelulusan
    if (nilaiAkhir <= E) {
        printf("Maaf, anda tidak lulus!");
    } else if (nilaiAkhir <= D) {
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!");
    } else if (nilaiAkhir <= C) {
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!");
    } else if (nilaiAkhir <= B_PLUS) {
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!");
    } else if (nilaiAkhir <= A) {
        printf("Selamat! Anda lulus dengan nilai yang sangat baik!");
    } else {
        printf("Selamat! Anda lulus dengan nilai yang sangat utama!");
    }

    return 0;
}