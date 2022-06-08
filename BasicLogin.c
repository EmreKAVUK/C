#include<stdio.h>
#include<locale.h>

typedef struct kayitol{
	char nickname[20];
	char password[20];
}kayit;
typedef struct giris{
	char nickname[20];
	char password[20];
	int ishuman;
}giris;

int main(){
	setlocale(LC_ALL,"Turkish");
	kayit neW;
	giris yeni;
	int secim, dogruluk;
	while(1==1){
	printf("Yapmak istediginiz iþlemi seçiniz\n1.Kayýt ol\n2.Giriþ yap\n ");
	scanf("%d",&secim);
	switch(secim){
		case 1 :
			printf("Kullanýcý adý : ");
			fflush(stdin);
			gets(neW.nickname);	
			printf("\nPassword : ");
			gets(neW.password);
			printf("Ýþleminiz Baþarý ile Gerçekleþti\n");
			
			break;
		case 2 :
			srand(time(NULL));
			printf("Kullanýcý Adýnýzý girin :");
			fflush(stdin);
			gets(yeni.nickname);
			printf("\nÞifrenizi Girin : ");
			gets(yeni.password);
			yeni.ishuman = rand();
			printf("Lütfen Ekranda gördüðünüz sayýyý giriniz..\n%d\n",yeni.ishuman);
			scanf("%d",&dogruluk);
			if(strcmp(neW.nickname,yeni.nickname)== 0 && strcmp(neW.password,yeni.password)== 0 && dogruluk == yeni.ishuman){
				printf("Giriþ Baþarýlý\n");
			}
			else{
				printf("Kullanýcý adý veya þifreniz hatalý\n\a");
			}
			break;
		default :
			printf("Lütfen 1-2 arasý seçim yapýnýz\n");
	}
		}
		system("pause");
		return 0;
}
