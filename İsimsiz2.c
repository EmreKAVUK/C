#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL,"Turkish");
	int islem;
	float Bakiye = 1000;
	float Tutar ;
	int numara;
	int secim;
	

	
menu:	printf("1.Para �ekme\n2.Para Yat�rma\n3.Bakiye Sorgulama\n4.Havale Yapma\n5.Fatura �deme\n");
	printf("L�tfen Yapmak �stedi�iniz ��lemi Se�iniz\n");
	printf("L�TFEN �IKMAK ���N -1 e Bas�n�z\n");
	scanf("%d",&islem);
	
	
	switch(islem){
		case 1: 
		printf("Bakiyeniz %.2f\n",Bakiye);
		printf("L�tfen �ekmek �stedi�iniz Tutar� Giriniz\n");
		scanf("%f",&Tutar);
		if(Tutar > Bakiye){
			printf("YETERS�Z BAK�YE\n");
		}
		else{
	
		Bakiye -= Tutar;
		printf("Yeni bakiyeniz %.2f\n",Bakiye);
			}
		break;
		
		case 2:
		printf("L�tfen Yat�rmak �stedi�iniz Tutar� Giriniz\n");
		scanf("%f",&Tutar);
		Bakiye += Tutar;
		printf("Yeni bakiyeniz %.2f\n",Bakiye);
		break;
		
		case 3 : 
		printf("Bakiyeniz %.2f\n",Bakiye);
		
		case 4 : 
		printf("Hesap numaras� giriniz ");
		scanf("%d",&numara);
		printf("Hesaba aktar�lacak Limiti giriniz ");
		scanf("%f",&Tutar);
		if(Tutar > Bakiye){
			printf("YETERS�Z BAK�YE\n");
				}
				else{
				
		Bakiye -= Tutar;
		printf("Hesaba Aktar�lan Tutar %f \n Kalan Bakiyeniz %f dir",Tutar,Bakiye);
		break;	}	

	
	    case 5: 
	    printf("1.Su Faturas�\n2.Elektrik Faturas�\n3.Do�algaz Faturas�\n");
	    scanf("%d",&secim);
	    switch(secim){
	    	case 1 : 
	    	
	    	
	   	printf("L�tfen �demek �stedi�iniz Tutar� Giriniz\n");
		scanf("%f",&Tutar);
		Bakiye -= Tutar;
		printf("��leminiz Ba�ar� �le Ger�ekle�mi�tir\nYeni bakiyeniz %.2f\n",Bakiye);
		break;
		break;
	    	case 2 : 
	      	
	   	printf("L�tfen �demek �stedi�iniz Tutar� Giriniz\n");
		scanf("%f",&Tutar);
		Bakiye -= Tutar;
		printf("��leminiz Ba�ar� �le Ger�ekle�mi�tir\nYeni bakiyeniz %.2f\n",Bakiye);
		break;
		case 3 : 
		  	
	   	printf("L�tfen �demek �stedi�iniz Tutar� Giriniz\n");
		scanf("%f",&Tutar);
		Bakiye -= Tutar;
		printf("��leminiz Ba�ar� �le Ger�ekle�mi�tir\nYeni bakiyeniz %.2f\n",Bakiye);
		
		break;
		
		default :
			printf("L�tfen 1-5 Aras� Se�im yap�n�z");
		}
			}
				if(islem == -1){
		exit( 3 );
    return 3;
	}
	goto menu;
	

	
	system("pause");
	
	return 0;
}
