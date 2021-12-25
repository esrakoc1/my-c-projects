#include <stdio.h>

int main(void){

int uzunkenar,kisakenar,alan,cevre;

printf("Bu program dikdortgenin alan ve cevresini hesaplar.\n");
printf("Dikdortgenin kisa kenarini giriniz.");
scanf("%d",&kisakenar);
printf("Dikdortgenin uzun kenarini giriniz.");
scanf("%d",&uzunkenar);

alan=kisakenar*uzunkenar;
cevre=(2*kisakenar)+(2*uzunkenar);

printf("Dikdortegnin cevresi: %d'dir.\n",cevre);
printf("Dikdortenin alani: %d'dir.",alan);



return(0);
}
