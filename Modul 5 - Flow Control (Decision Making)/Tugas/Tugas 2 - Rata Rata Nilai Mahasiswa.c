/*
Nama  : Fattan Naufan Islami
NIM   : 23343037
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    int nilairata2[20] = {80, 50, 60, 72, 56, 82, 90, 94, 45, 48, 
						  80 , 70, 75, 88, 80, 60, 82, 84, 65, 75};
    int total = 0;
    float rata2;
    
    printf(" __       ___          __       ___                                                     __     __            \n");
    printf("|__)  /\\   |   /\\  __ |__)  /\\   |   /\\     |\\ | | |     /\\  |     |\\/|  /\\  |__|  /\\  /__` | /__` |  |  /\\  \n");
    printf("|  \\ /~~\\  |  /~~\\    |  \\ /~~\\  |  /~~\\    | \\| | |___ /~~\\ |     |  | /~~\\ |  | /~~\\ .__/ | .__/ |/\\| /~~\\ \n");
    printf("--------------------------------------------------------------------------------------------------------------\n");
                                                                                                            
    printf("\t\t\t+-----------------------+\n");
    printf("\t\t\t| No.  | Nilai Mahasiswa|\n");
    printf("\t\t\t+-----------------------+\n");
    for(int i = 0; i < 20; i++){ 
        printf("\t\t\t| %-4d | %-14d |\n", i+1, nilairata2[i]); 
        total += nilairata2[i]; 
    }
    printf("\t\t\t+-----------------------+\n");
    
    rata2 = (float) total / 20;
    
    printf("\nRata - rata nilai dari 20 mahasiswa tersebut ialah : %.2f\n", rata2);
    
    return 0;
}
