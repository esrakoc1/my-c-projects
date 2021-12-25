#include <stdio.h>

int main(void){
	
	int a;
	
	printf("Bir pozitif sayi giriniz");
	scanf("%d",&a);
	  
	  while(a<0)
	  {
	  printf("pozitif sayi giriniz",a);
	  scanf("%d",&a);
	  }
	 
	 printf("en son a degeri %d dir",a); 
	 
	return(0);
}
