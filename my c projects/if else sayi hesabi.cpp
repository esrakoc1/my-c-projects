#include <stdio.h>

int main(void){
	
	int sayi, sonuc;
	
	printf("Bir sayi giriniz:",sayi);
	scanf("%d",&sayi);
	if(sayi>0)
	   sonuc=sayi*5;
	else
	   sonuc=2-sayi;
	   printf("Sonuc %d",sonuc);

return(0);	
}
