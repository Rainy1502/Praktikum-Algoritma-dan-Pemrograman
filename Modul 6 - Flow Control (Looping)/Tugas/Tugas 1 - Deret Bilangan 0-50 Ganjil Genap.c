/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int main() {
  int i;

	printf(" __   ___  __   ___ ___     __                    __                __                          __   ___            __  \n");
	printf("|  \\ |__  |__) |__   |     |__) | |     /\\  |\\ | / _`  /\\  |\\ |    / _`  /\\  |\\ |    | | |     / _` |__  |\\ |  /\\  |__) \n");
	printf("|__/ |___ |  \\ |___  |     |__) | |___ /~~\\ | \\| \\__> /~~\\ | \\|    \\__> /~~\\ | \\| \\__/ | |___  \\__> |___ | \\| /~~\\ |    \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");

  // Deret bilangan genap
  printf("Deret bilangan genap dari 0 - 50: ");
  for (i = 0; i <= 50; i += 2) {
    printf("%d ", i);
  }
  printf("\n");

  // Deret bilangan ganjil
  printf("Deret bilangan ganjil dari 0 - 50: ");
  for (i = 1; i <= 50; i += 2) {
    printf("%d ", i);
  }
  printf("\n");

  return 0;
}