#include <stdio.h>
#define PI 3.14

int main(void){
	
	float yaricap,alan,cevre;
	
		printf("*****Bu program dairenin alanini hesaplar.*****\n\n");
		
		printf ("Dairenin yaricapini giriniz:");
		scanf("%f",&yaricap);
		
		alan=PI*yaricap*yaricap;
		cevre=2*PI*yaricap;
		
		printf("Dairenin alani %.2f'dir.\n",alan);
		printf("Dairenin cevresi %.2f'dir.",cevre);


	
	return 0;
}
