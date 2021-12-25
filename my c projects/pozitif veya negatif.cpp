#include <stdio.h>

void hatayibas(int hata){
	
	printf("Hata kodu %d",hata);

}

int main() {

int sayi;

printf("Pozitif bir sayi giriniz");
scanf("%d",&sayi);

if(sayi<0){
	
	hatayibas(404);
	
}

else{
	
	printf("Tebrikler.");
	
}


return(0);
}
