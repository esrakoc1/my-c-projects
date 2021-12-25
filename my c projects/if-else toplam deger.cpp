#include <stdio.h>
int main(void){
	
	int sayi1,sayi2,toplam;
	sayi1=24;
	sayi2=22;
	
	toplam=sayi1+sayi2;
	
	if(toplam>=50){
		
		printf("Toplam deger: %d'dir. Sayi 50 den buyuktur.",toplam);
		
	}
	else {
		
		printf("Toplam deger: %d'dir. Sayi 50 den kucuktur.",toplam);
		
	}
	
	
	
	
	return 0;
}
