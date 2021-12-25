#include <stdio.h>
#define PI 3.14

int main(void){
	
	/*Bu program silindirin hacmini hesaplar.*/
	
	float r,h;
	float hacim;
	
	printf("Silindirin yuksekligini'h'giriniz:",h);
	scanf("%f",&h);
	printf("Silindirin taban yaricapini'r'giriniz",r);
	scanf("%f",&r);
	
	hacim=PI*r*r*h;
	printf("Silindirin hacmi %f'dir.",hacim);
	
	
	
	return(0);
}
