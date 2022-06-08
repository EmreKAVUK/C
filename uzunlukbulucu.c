#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int uzunlukbul(char *diziadresi){
	int uzunluk = 0;
	int i;
	for(i = 0;diziadresi[i] != '\0';i++){
		uzunluk++;
	}
	return uzunluk;
}
int main(){
	
	char isim[] ="Darkbones Bey";
	printf("%s dizisininin uzunlugu : %d\n",isim,uzunlukbul(&isim));
//	printf("Dizinin uzunlugu : %d",strlen(isim));//
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

