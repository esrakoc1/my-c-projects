#include <stdio.h>
int main(void){
	
   int misir,su,kola,bilet,toplam;
   
   printf("Misir Adedi: ");
   scanf("%d",&misir);
   
   printf("Su Adedi: ");
   scanf("%d",&su);
   
   printf("Kola Adedi: ");
   scanf("%d",&kola);
   
   printf("Bilet Adedi: ");
   scanf("%d",&bilet);
   
   toplam=misir*2+kola*2+su*1+bilet*8;
   
   printf("Toplam borcunuz: %d TL'dir.",toplam);
   
   
   
   
	return(0);
}
