#include <stdio.h>

int main(void){

float kenar1,kenar2,kenar3,aland,alank;
char ch;

printf("Seklinizi seciniz(D/d(kare) veya D/d(dikdortgen)");
scanf("%c",&ch);

if (ch=='K' || ch=='k'){
	printf("Karenin bir kenar uzunlugunu giriniz.",kenar3);
	scanf("%f",&kenar3);
	
	alank=kenar3*kenar3;
	
	printf("Karenin alani:%f dir",alank);
}

else if (ch=='D' || ch=='d'){
		printf("Dikdortgenin uzun kenar uzunlugunu giriniz.",kenar1);
	    scanf("%f",&kenar1);
	    printf("Dikdortgenin kisa kenar uzunlugunu giriniz.",kenar2);
	    scanf("%f",&kenar2);
	
	aland=kenar1*kenar2;
	printf("Dikdortgenin alani:%f dir",aland);
}

	return(0);
}
