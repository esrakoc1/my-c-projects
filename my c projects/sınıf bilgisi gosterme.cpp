#include <stdio.h>
int main(void){
	
	int sinif;
	printf("Bir sinif degeri giriniz.");
	
	scanf("%d",&sinif);
	switch(sinif)
	{    case 0: printf("Hazirlik sinifi ogrencisi\n");
	     break;
	     
	     case 1: printf("Birinci sinif ogrencisi\n");
	     break;
	     
	     case 2: printf("Ikinci sinif ogrencisi\n");
	     break;
	     
	     case 3: printf("Ucuncu sinif ogrencisi\n");
	     break;
	     
	     case 4: printf("Dorduncu sinif ogrencisi\n");
	     break;
	     
	     default: printf("Sinif bilgisi yanlistir.");
		
	}
		

	
	
	
	return(0);
}
