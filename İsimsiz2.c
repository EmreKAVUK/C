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
	

	
menu:	printf("1.Para Çekme\n2.Para Yatýrma\n3.Bakiye Sorgulama\n4.Havale Yapma\n5.Fatura Ödeme\n");
	printf("Lütfen Yapmak Ýstediðiniz Ýþlemi Seçiniz\n");
	printf("LÜTFEN ÇIKMAK ÝÇÝN -1 e Basýnýz\n");
	scanf("%d",&islem);
	
	
	switch(islem){
		case 1: 
		printf("Bakiyeniz %.2f\n",Bakiye);
		printf("Lütfen Çekmek Ýstediðiniz Tutarý Giriniz\n");
		scanf("%f",&Tutar);
		if(Tutar > Bakiye){
			printf("YETERSÝZ BAKÝYE\n");
		}
		else{
	
		Bakiye -= Tutar;
		printf("Yeni bakiyeniz %.2f\n",Bakiye);
			}
		break;
		
		case 2:
		printf("Lütfen Yatýrmak Ýstediðiniz Tutarý Giriniz\n");
		scanf("%f",&Tutar);
		Bakiye += Tutar;
		printf("Yeni bakiyeniz %.2f\n",Bakiye);
		break;
		
		case 3 : 
		printf("Bakiyeniz %.2f\n",Bakiye);
		
		case 4 : 
		printf("Hesap numarasý giriniz ");
		scanf("%d",&numara);
		printf("Hesaba aktarýlacak Limiti giriniz ");
		scanf("%f",&Tutar);
		if(Tutar > Bakiye){
			printf("YETERSÝZ BAKÝYE\n");
				}
				else{
				
		Bakiye -= Tutar;
		printf("Hesaba Aktarýlan Tutar %f \n Kalan Bakiyeniz %f dir",Tutar,Bakiye);
		break;	}	

	
	    case 5: 
	    printf("1.Su Faturasý\n2.Elektrik Faturasý\n3.Doðalgaz Faturasý\n");
	    scanf("%d",&secim);
	    switch(secim){
	    	case 1 : 
	    	
	    	
	   	printf("Lütfen Ödemek Ýstediðiniz Tutarý Giriniz\n");
		scanf("%f",&Tutar);
		Bakiye -= Tutar;
		printf("Ýþleminiz Baþarý Ýle Gerçekleþmiþtir\nYeni bakiyeniz %.2f\n",Bakiye);
		break;
		break;
	    	case 2 : 
	      	
	   	printf("Lütfen Ödemek Ýstediðiniz Tutarý Giriniz\n");
		scanf("%f",&Tutar);
		Bakiye -= Tutar;
		printf("Ýþleminiz Baþarý Ýle Gerçekleþmiþtir\nYeni bakiyeniz %.2f\n",Bakiye);
		break;
		case 3 : 
		  	
	   	printf("Lütfen Ödemek Ýstediðiniz Tutarý Giriniz\n");
		scanf("%f",&Tutar);
		Bakiye -= Tutar;
		printf("Ýþleminiz Baþarý Ýle Gerçekleþmiþtir\nYeni bakiyeniz %.2f\n",Bakiye);
		
		break;
		
		default :
			printf("Lütfen 1-5 Arasý Seçim yapýnýz");
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
