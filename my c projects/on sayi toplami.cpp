#include <stdio.h>

int main(void){
	
	int i;
	float sayi,toplam;
	i=1;
	toplam=0.0;
	
	while(i<=10)
	{
		printf("%d. sayiyi giriniz:",i);
		scanf("%f",&sayi);
		
		if(sayi>0)
		toplam=toplam+sayi;
		
		i=i+1;
		
	}
	
	printf("Pozitif sayilarin toplami:%5.2f'dir");
	
	
	return(0);
}
