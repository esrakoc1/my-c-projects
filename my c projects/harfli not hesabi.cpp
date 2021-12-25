#include <stdio.h>
int main(void){
	
	int note;
	
	printf("Notunuzu giriniz:");
	scanf("%d",&note);
	
	if(note>=0 && note<50){
		printf("Harfli notunuz ff'dir.");
	}
	
	if (note<60 && note>=50){
		printf("Harfli notunuz dd'dir.");
	}
	
	if (note<70 && note>=60){
		printf("Harfli notunuz cc'dir.");
	}
	
	if (note<85 && note>=70){
		printf("Harfli notunuz bb'dir.");
	}
	
	if (note>=85 && note<=100){
		printf("Harfli notunuz aa'dir");
	}
	
	else if (note>100 || note<0) {
		printf("Hata! Not araliginin disinda bir sayi girdiniz.");
	}
	
	
	
	return 0;
}
