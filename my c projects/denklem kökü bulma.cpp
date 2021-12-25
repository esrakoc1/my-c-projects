#include <stdio.h>
#include <math.h>

int main(void) {
	
	int a,b,c;
	float delta;
	float kok1,kok2;
	
	printf("Bu program denklemin koklerini hesaplar.\n");
	printf("Denklemin a sini giriniz");
	scanf("%d",&a);
	printf("Denklemin b sini giriniz");
	scanf("%d",&b);
	printf("Denklemin c sini giriniz");
	scanf("%d",&c);
	
	delta = (b*b)- (4*a*c);
	kok1 = (-b+sqrt(delta))/(2.0*a);
	kok2 = (-b-sqrt(delta))/(2.0*a);
	printf("Denklemin birinci koku %f, ikinci koku %f dir", kok1,kok2);
	
	
	return(0);
}
