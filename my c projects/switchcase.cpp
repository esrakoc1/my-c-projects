#include <stdio.h>

int main(void){
	
	int sayi,b;
	
	printf("Bir sayi giriniz");
	scanf("%d",&sayi);
	
	switch(sayi) 
	{
		case 0: b=8-sayi;
		printf("*%d*\n",b);
		
		
		case 1: b=sayi-8;
		printf("*%d*\n",b);
		
	
	    case 2: b=sayi*3;
		printf("*%d*\n",b);
		
	
	    case 3: b=sayi+6;
		printf("*%d*\n",b);
		break;
		
		default: printf("Islem yoktur.");
	
	}
	
		
		
		
		
	
	
	
	
	return(0);
}

