#include <stdio.h>
 int main(void) {
 	
 	char adi[20],soyad[20],yas[3],sehir[15],meslek[20];
 	
 	printf("Adinizi giriniz:");
 	scanf("%s",&adi);
 	
 	printf("Soyadinizi giriniz:");
 	scanf("%s",&soyad);
 	
 	printf("Yasinizi giriniz:");
 	scanf("%s",&yas);
 	
 	printf("Sehrinizi giriniz:");
 	scanf("%s",&sehir);
 	
 	printf("Mesleginizi giriniz:");
 	scanf("%s",&meslek);
 	
 	printf("\n");
 	
 	printf(" Adi: %s\n Soyadi: %s\n Yasi: %s\n Sehri : %s\n Meslegi: %s",adi,soyad,yas,sehir,meslek);
 
 return(0);
 }
