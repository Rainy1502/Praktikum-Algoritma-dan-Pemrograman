#include <stdio.h>

int main() {
    int pilihan;
    float saldo = 175000;
    float nominal;
    char no_rek[] = "0123";
    char nama_akun[] = "Hattori";

    do {
        printf("     ___       \n");
        printf(" /\\   |   |\\/| \n");
        printf("/~~\\  |   |  | \n");
        printf("---------------\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("\nPilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Nomor rekening : %s\n", no_rek);
                printf("Nama Akun : %s\n", nama_akun);
                printf("Saldo Anda saat ini: Rp.%.0f\n", saldo);
                getchar();
                break;
            case 2:
                printf("Masukkan nominal setoran: Rp.");
                scanf("%f", &nominal);
                if (nominal > 0) {
                    saldo += nominal;
                    printf("Nomor rekening : %s\n", no_rek);
                    printf("Nama Akun : %s\n", nama_akun);
                    printf("Setoran berhasil dilakukan...\n\n");
					printf("Saldo Anda saat ini: Rp.%.0f\n", saldo);
                    getchar();
                } else {
                    printf("Jumlah setoran harus lebih dari 0.\n");
                    getchar();
                }
                break;
            case 3:
                printf("Masukkan nominal penarikan: Rp.");
                scanf("%f", &nominal);
                if (nominal > 0) {
                    if (saldo - nominal < 50000) {
                        printf("Saldo Anda tidak mencukupi.\n\n"); 
						printf("Saldo minimal yang harus tersisa adalah Rp.50.000\n");
                    } else {
                        saldo -= nominal; // Deduct the withdrawal amount from the balance
                        printf("Nomor rekening : %s\n", no_rek);
                        printf("Nama Akun : %s\n", nama_akun);
                        printf("Penarikan tunai berhasil dilakukan\n\n");
						printf("Saldo Anda sekarang: Rp.%.0f\n", saldo);
                        getchar();
                    }
                } else {
                    printf("Jumlah penarikan harus lebih dari 0.\n");
                    getchar();
                }
                break;
            case 4:
                printf("Terima kasih telah menggunakan ATM kami.\n");
                getchar();
                break;
            default:
                printf("Pilihan tidak valid. Silahkan pilih menu yang tersedia\n");
                getchar();
                break;
        }
    } while (pilihan != 4);

    return 0;
}

