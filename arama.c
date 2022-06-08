#include<stdio.h>
int main(){
	char metin[50];
	char karakter;
	int i , sayac= 0 ;
	printf("Metin giriniz... \n");
	gets(metin);
    printf("Aramak istediginiz karakteri giriniz...\n");
	fflush(stdin);
	scanf("%c",&karakter);
	
	for(i=0;metin[i]!='\0';i++){
		if(metin[i]==karakter){
			sayac++;
		}
	}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
