#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	FILE *kayit;
	int secim ;
	char isim[25];
	char soyad[25];
	char bolum[25];
	int yas;
	int choose;
	kayit = fopen("untitled1.txt","a");
	while(1==1){
menu:	printf("Ad�n�z� ve Soyad�n�z� giriniz\n");
		scanf("%s %s",&isim,&soyad);
		fflush(stdin);
		fprintf(kayit,"Ad : %s %s\n",&isim,&soyad);
		printf("Ya��n�z� giriniz\n");
		scanf("%d",&yas);
		fflush(stdin);
		fprintf(kayit,"Ya� : %d\n",yas);
		printf("B�l�m�n�z� giriniz\n");
		fflush(stdin);
		gets(bolum);
		fprintf(kayit,"B�l�m : %s\n",&bolum);
		printf("1-) Devam Et\n2-) ��lemi bitir\n");
		scanf("%d",&choose);
		if(choose == 1 )
		goto menu;
		else if (choose ==2 ){
	exit( 3 );
    return 3;
		}
		else{
			printf("L�tfen i�lemi do�ru se�iniz ! \a \n");
		}
		fclose(kayit);
		
	    system("pause");
		
		
	}
	
}
