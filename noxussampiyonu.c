#include<stdio.h>
#include<locale.h>

int main(){
	
	
	setlocale(LC_ALL,"Turkish");
	
int secim1 ; 
int secim2;
int secim3;
int secim4 ;

printf("L�tfen 4 Tane �zelli�i S�ra �le Se�iniz! Bunlar : B�lge , Menzil, AD ya da Ap ,�zelliktir\n");
printf("Hangi Noxus �ampiyonusun ? \n");
printf("1.YA�ASIN Noxus\n2.HA�N Demacial�y�m\n3.Uzak��\n4.Yak�nc�\n5.AP\n6.AD\n7.K�l��l�\n8.Kan\n9.Sopa\n10.�l�\n11.Lider\n12.Balta\n13.Han�er\n14.K�r�kK�l��l�\n15.Y�lan\n16.Yalanc�\n17.T�fekli\n");
scanf("%d %d %d %d",  &secim1,&secim2,&secim3,&secim4);
if(secim1 == 1 && secim2 == 3 && secim3 ==6 && secim4==12 || secim4== 12){
	printf("Sen Draven de�il DRAAAAAAAVENSIN");
}
else if(secim1 == 1 && secim2 == 4 && secim3 ==5 && secim4 == 13  ){
	printf("Ka�arsan S�rt�na Saplanan Han�eri G�remezsin! -Katarina");

}
else if(secim1 == 1 && secim2 == 3 && secim3 ==5 && secim4 == 8 ){
	printf("Herkesin i�inde bir canavar yatar ayr�ca kesinlikle Putin de�ilim. -Vladimir");

}
else if(secim1 == 1 && secim2 == 4 && secim3 ==6 && secim4 == 7 ){
	printf("K�l��la ya�a k�l��la �l -Talon");


}
else if(secim1 == 1 && secim2 == 4 && secim3 ==6 && secim4 == 14 ){
	printf("K�r�k k�l�� yeniden d�v�l�r -Riven");}
	

else if(secim1 == 1 && secim2 == 3 && secim3 ==5 && secim4 == 15 ){
	printf("Er ya da ge� hepsi s�r�nerek d�necek. -Cassiopeia");}
	
	else if(secim1 == 1 && secim2 == 4 && secim3 ==6 && secim4 == 12 ){
	printf("Sadece benimle zafere ula��rs�n! -Darius");}
	
	else if(secim1 == 1 && secim2 == 4 && secim3 ==6 && secim4 == 10 ){
	printf("D�ver�m ulen hepinizi d�verim! - Sion");}
	
		else if(secim1 == 1 && secim2 == 4 && secim3 ==6 && secim4 == 11 ){
	printf("Savunmalar� ��k�yor! - Swain");}
		else if(secim1 == 1 && secim2 == 3 && secim3 ==5 && secim4 == 16 ){
	printf("Ne yalan s�yleyim s�ylediklerimin y�zde doksan be�i yalan.- LeBlanc");}
		else if(secim1 == 1 && secim2 == 4 && secim3 ==6 && secim4 == 17 ){
	printf("Yakla�ta Burnuna Tekmeyi Sokuverem !- Kled");}


	else {

	printf("HA�N demacial� en k�sa s�rede �ld�r�leceksin ��nk� NOXUS KAN �ST�YOR :\)");}
	


pause("system");

return 0;	
}
