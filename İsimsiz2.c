#include<stdio.h>
#include<locale.h>

int main(){
	
	
	setlocale(LC_ALL,"Turkish");
	
	char karakter;
	printf("Karakter Giriniz : ");
	scanf("%c",&karakter);


int karakterinAsciiDegeri = karakter;
if (karakterinAsciiDegeri >= 60 && karakterinAsciiDegeri<=90){
	
	printf("Harf B�y�kt�r ve Ascii degeri %d dir\n ", karakterinAsciiDegeri);
	
}




if(karakterinAsciiDegeri >= 97 && karakterinAsciiDegeri<=122){
	printf("Harf K���kt�r ve Ascii  degeri %d dir \n", karakterinAsciiDegeri);
}

else{
	printf("L�tfen A-Z aral���nda bir harf giriniz");
	
	
}



system("pause");

	return 0;
	
	
	
	
	
	
	
	
	
	
}
