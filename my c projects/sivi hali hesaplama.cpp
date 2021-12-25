#include <stdio.h>
int main(void){
	
	float derece;
	
	printf("Suyun sicakligini giriniz:");
	scanf("%f",&derece);
	if(derece<=0){
		
		printf("Su buz haldedir.");
		
	}
	else if(derece>=1 && derece<100){
		printf("Su sivi haldedir.");		
	}
	else if(derece>=100){
		
		printf("Su buhar haldedir.");
		
	}
	
	return 0;
}
