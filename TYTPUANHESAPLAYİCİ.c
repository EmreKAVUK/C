#include<stdio.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL,"Turkish");
	
	int TurkceDogru , TurkceYanlis , MatematikDogru ,MatematikYanlis , FenDogru, FenYanlis,SosyalDogru,SosyalYanlis;
    float TurkceNet , SosyalNet, FenNet,MatematikNet, OrtaOkulBasariPuani,YKSPUAN,OBP,BARAJ;
	
		
	printf("T�rk�e Do�ru Say�n�z� Giriniz: " );
	scanf("%d",&TurkceDogru );
	printf("T�rk�e Yanl�� Say�n�z� Giriniz: ");
	scanf("%d",&TurkceYanlis);
	TurkceNet = (TurkceDogru - (TurkceYanlis*0.25));
	printf("T�rk�e Netiniz : %.2f\n", TurkceNet);
	
	
			
	printf("Matematik Do�ru Say�n�z� Giriniz: " );
	scanf("%d",&MatematikDogru );
	printf("Matematik Yanl�� Say�n�z� Giriniz: ");
	scanf("%d",&MatematikYanlis);
	MatematikNet  = (MatematikDogru - (MatematikYanlis*0.25));
	printf("Matematik Netiniz : %.2f\n", MatematikNet);
	
	
			
	printf("Fen Do�ru Say�n�z� Giriniz: " );
	scanf("%d",&FenDogru );
	printf("Fen Yanl�� Say�n�z� Giriniz: ");
	scanf("%d",&FenYanlis);
	FenNet = (FenDogru - (FenYanlis*0.25));
	printf("Fen Netiniz : %.2f\n", FenNet);
	
	
			
	printf("Sosyal Do�ru Say�n�z� Giriniz: " );
	scanf("%d",&SosyalDogru );
	printf("Sosyal Yanl�� Say�n�z� Giriniz: ");
	scanf("%d",&SosyalYanlis);
	SosyalNet =  (SosyalDogru - (SosyalYanlis*0.25));
	printf("Sosyal Netiniz : %.2f\n", SosyalNet);
	
	

	
	BARAJ =100+(TurkceNet*3.3)+(MatematikNet*3.3)+(FenNet*3.4)+(SosyalNet*3.4);
	if (BARAJ < 150){
		
		printf("MALESEF BARAJI GE�EMED�N�Z");
		
	}
	
	if (BARAJ >= 150){
		
		
	OBP = (OrtaOkulBasariPuani*0.6);
	
	printf("Ortaokul Ba�ar� Puan�n�z� Giriniz: ");
	scanf("%f/n",&OrtaOkulBasariPuani);
	
	YKSPUAN = (100+OBP+(TurkceNet*3.3)+(MatematikNet*3.3)+(FenNet*3.4)+(SosyalNet*3.4));	
	
	printf("TYT PUANINIZ : %.2f\n",YKSPUAN);
	
	
	system("pause");
	return 0 ;
	
	}	
}
