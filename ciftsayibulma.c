#include<stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Turkish");
	
int	sayi1= 0;
int sayi2 = 0;	
int i ;	
	
	printf("Ýlk sayýyý giriniz : ");
	scanf("%d",&sayi1);
	printf("Ýkinci sayýyý giriniz : ");
	scanf("%d",&sayi2);
	

		
		for (i = sayi1 ; i <=sayi2 ; i++){
		if (i % 2 == 0){
	
		printf(" çift sayýdýr : %d\n",i);
		
		
			}
		
	}


	system("pause");
	return 0;
	
	
}
