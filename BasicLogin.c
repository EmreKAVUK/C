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
	printf("Yapmak istediginiz i�lemi se�iniz\n1.Kay�t ol\n2.Giri� yap\n ");
	scanf("%d",&secim);
	switch(secim){
		case 1 :
			printf("Kullan�c� ad� : ");
			fflush(stdin);
			gets(neW.nickname);	
			printf("\nPassword : ");
			gets(neW.password);
			printf("��leminiz Ba�ar� ile Ger�ekle�ti\n");
			
			break;
		case 2 :
			srand(time(NULL));
			printf("Kullan�c� Ad�n�z� girin :");
			fflush(stdin);
			gets(yeni.nickname);
			printf("\n�ifrenizi Girin : ");
			gets(yeni.password);
			yeni.ishuman = rand();
			printf("L�tfen Ekranda g�rd���n�z say�y� giriniz..\n%d\n",yeni.ishuman);
			scanf("%d",&dogruluk);
			if(strcmp(neW.nickname,yeni.nickname)== 0 && strcmp(neW.password,yeni.password)== 0 && dogruluk == yeni.ishuman){
				printf("Giri� Ba�ar�l�\n");
			}
			else{
				printf("Kullan�c� ad� veya �ifreniz hatal�\n\a");
			}
			break;
		default :
			printf("L�tfen 1-2 aras� se�im yap�n�z\n");
	}
		}
		system("pause");
		return 0;
}
