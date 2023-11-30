#include <stdio.h>

int main(){
	
int n;

printf("\n-----------------------------\n");
printf("Masukan Bilangan: ");
scanf("%d", &n);

printf("Deret Bilangan Genap Adalah:\n");
for(int i = 2; i <= 50; i += 2) {
	printf("%d ", i);	
}

printf("\n-----------------------------\n");
printf("\n-----------------------------\n");
printf("Masukan Bilangan: ");
scanf("%d", &n);

printf("Deret Bilangan Ganjil Adalah:\n");
for(int i = 1; i <= 49; i += 2) {
	printf("%d ", i);
}
printf("\n-----------------------------\n\n\n");

return 0;
}
