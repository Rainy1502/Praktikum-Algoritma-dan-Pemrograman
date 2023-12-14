/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int main() {
  int Lesley = 57082;

  // Cara A
  int Layla_A = Lesley; 
  int Balmond_A = Layla_A + 1;

  // Cara B
  int *Layla_B = &Lesley; 
  int Balmond_B = *Layla_B + 1;

  printf("                       __                   __        __      __                                       \n");
  printf("|\\ | | |     /\\  |    |__)  /\\  |     |\\/| /  \\ |\\ | |  \\    |  \\  /\\  |\\ |    |     /\\  \\ / |     /\\  \n");
  printf("| \\| | |___ /~~\\ |    |__) /~~\\ |___  |  | \\__/ | \\| |__/    |__/ /~~\\ | \\|    |___ /~~\\  |  |___ /~~\\ \n");
  printf("-------------------------------------------------------------------------------------------------------\n");
                                                                                                       

  printf("Nilai Layla (Cara A) = %d\n", Layla_A);
  printf("Nilai Balmond (Cara A) = %d\n\n", Balmond_A);

  printf("Nilai Layla (Cara B) = %d\n", *Layla_B);
  printf("Nilai Balmond (Cara B) = %d\n", Balmond_B);

  return 0;
}