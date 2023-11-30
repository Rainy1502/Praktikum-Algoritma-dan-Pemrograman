#include <stdio.h>

int saldo = 175000;
const int saldo_minimal = 50000;

void cekSaldo(){
	printf("Saldo Anda Saat Ini: Rp. %d\n", saldo);
	}
	
void setoran(){
	int jumlah_setoran;
	printf("Masukan Jumlah Uang Setoran: Rp. ");
	scanf("%d", &jumlah_setoran);
	
	saldo += jumlah_setoran;
	printf("Setoran anda Berhasil.\n");
}

void penarikan(){
	if (saldo <= saldo_minimal){
		printf("Saldo Anda Tidak Mencukupi Untuk Melakukan Penarikan.\n");
		return;
	}
	
	int jumlah_penarikan;
	printf("Masukan Jumlah Uang: Rp. ");
	scanf("%d", &jumlah_penarikan);
	
	if(jumlah_penarikan > saldo - saldo_minimal){
		printf("Saldo Anda Tidak Mencukupi Untuk Melakukan Penarikan Sesuai kebijakan Bank.");
	} else {
		saldo -= jumlah_penarikan;
		printf("Penarikan Berhasil.\n");
	}
}
	int main(){
		char menu;
		int rek = 123;
		char Nama_Nasabah[] = "Hatori";
		
		printf("Selamat Datang, %s!\n", Nama_Nasabah);
		printf("No. Rekening: %d\n", rek);
		
		do{
			printf("\nMenu Pilihan:\n");
			printf("1. Cek Saldo\n");
			printf("2. Setoran\n");
			printf("3. Tarik Tunai\n");
			printf("4. Exit\n");
			printf("Pilih Menu: ");
			scanf("%c", &menu);
			
			switch (menu){
				case '1':
					cekSaldo();
					break;
					
				case '2':
					setoran();
					break;
					
				case '3':
					penarikan();
					break;
					
				case '4':
					printf("Terimakasih.");
					break;
					
				/*default:
					printf("Menu Tidak Ditemukan. Silakan Coba Lagi.\n");*/
			}
		} while (menu != '4');
		
		//return 0;
}
