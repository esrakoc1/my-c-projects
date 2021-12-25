#include <stdio.h>
int main(void)
{
	
	int vize1;
	int vize2;
	int final;
	float dersort;
	float gano;
	printf("1. Vize:");
	scanf("%d",&vize1);
	printf("2. Vize:");
	scanf("%d",&vize2);
	printf("Final:");
	scanf("%d",&final);
	printf("Gano:");
	scanf("%f",&gano);
	dersort = vize1*3/10.0 + vize2*3/10.0 + final*4/10.0;
	
	
	if (dersort>= 90) {
		printf("Notunuz AA ve ders ortalamaniz: %f",dersort);
		
	}
	else if(dersort>=85 && dersort<90) {
		printf("Notunuz BA ve ders ortalamaniz: %f",dersort);
	}
	
	else if (dersort>=80 && dersort<85) {
		printf("Notunuz BB ve ders ortalamaniz: %f.", dersort);
		
	}
	else if(dersort>=75 && dersort<80) {
		printf("Notunuz CB ve ders ortalamaniz: %f.", dersort);
	}
	
	else if (dersort>=70 && dersort<80) {
		printf("Notunuz CC ve ders ortalamaniz: %f.", dersort);
		
		if (gano<2.5) {
			printf("Ortalaman dusuk. Bute girsen iyi olur.");
	}
		}
		
    else if (dersort>=65 && dersort<70) {
		printf("Notunuz DC ve ders ortalamaniz: %f.", dersort);
		
		if (gano<2.5) {
			printf("Ortalaman dusuk. Bute girsen iyi olur.");
		}	
	}
	 else if (dersort>=70 && dersort<75) {
	 
		printf("Notunuz DD ve ders ortalamaniz: %f.", dersort); 

		if (gano<2.5) {
			printf("Ortalaman dusuk. Bute girsen iyi olur.");
		}
	}
		else  {
			printf("Notunuz FF ve ders ortalamaniz: %f.\n", dersort);
			printf("Dersten kaldiniz.");
		}
	
		
		return(0);
	}
	
	
