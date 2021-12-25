#include <stdio.h>

int main(void){

int sayi;
printf("Bir sayi giriniz:");
scanf("%d",&sayi);

if (sayi%7==0){
	printf("%d sayisi 7ye tam bolunur.",sayi);
	
}
	else{
		printf("%d sayisi 7ye tam bolunmez",sayi);
	}
	
	return(0);
}
