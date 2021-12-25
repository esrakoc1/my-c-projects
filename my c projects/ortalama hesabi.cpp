#include <stdio.h>
int main(void){
	
	int sinav1,sinav2,sinav3,proje,ortalama;
	
	printf("1. sinav notunuzu giriniz.");
	scanf("%d",&sinav1);
	printf("2. sinav notunuzu giriniz.");
	scanf("%d",&sinav2);
	printf("3. sinav notunuzu giriniz.");
	scanf("%d",&sinav3);
	printf("Proje notunuzu giriniz.");
	scanf("%d",&proje);
	
	ortalama=(sinav1+sinav2+sinav3+proje)/4;
	
	printf("Ortalamaniz %d'dir.",ortalama);
	
	
	
	
	return(0);
}
