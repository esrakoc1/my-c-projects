#include <stdio.h>
int main(void){
	
	int sayi;
	
	printf("Bir sayi giriniz.");
	scanf("%d",&sayi);
	
	if(sayi%5==0 && sayi%3==0){
		
		printf("Sayi 3 ve 5'e tam bolunur.");
		
	}
	
	else{
		printf("Sayi 3 ve 5'e tam bolunmez.");
	}
	
	
	
	return 0;
}
