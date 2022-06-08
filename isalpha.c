#include<stdio.h>


	int main (){
		
		int sayi,i;
		printf(" enter number btwn 1 100\n");
	
		scanf("%d",&sayi);
		
		
		while (sayi <1 || sayi >100){
					
				if(sayi == isalpha(sayi)){
				
				printf("this isnt number\n");
				scanf("%d",&sayi);
			}
			
			printf("try again\n");
			
			fflush(stdin);
			
			scanf("%d",&sayi);
			fflush(stdin);
		
			
			
		}
		system("pause");
		
		return 0;
	}
