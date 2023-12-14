#include <stdio.h> 
// Ialah sebuah pustaka dari sebuah kode yang bakal digunakan seperti contohnya  printf, scanf 

/* sebuah eksekusi fungsi utama yang berfungsi sebagai starting point dari program c */
int main(){ 
	
	// Sebuah judul dari program
    printf("      ___            __           __   __        __ \n"); 
    printf("|__| |__  |    |    /  \\    |  | /  \\ |__) |    |  \ \n"); 
    printf("|  | |___ |___ |___ \\__/    |/\\| \\__/ |  \\ |___ |__/ \n"); 
    printf("-----------------------------------------------------\n");
    printf("\n");

	printf("Hello World");  /* Perintah yang digunakan untuk mencetak teks Hello World ke output layar kita. 
                              Teks harus diberikan tanda kutip agar tidak terjadi kesalahan di karenakan kompilator
                              tidak akan menemukan teks yang kita tulis oleh karena variabel tersebut tidak 
                                                         di deklarasikan*/
	return 0;/* Sebuah perintah yang digunakan untuk menunjukkan bahwa program telah selesai dan akan
                              mengembalikan nilai 0 kepada sistem operasi  */
}
