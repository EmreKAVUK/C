#include<stdio.h>
#include<locale.h>

int main(){
	
	
	setlocale(LC_ALL,"Turkish");
	
int secim1 ; 
int secim2;
int secim3;
int secim4 ;

printf("Lütfen 4 Tane Özelliði Sýra Ýle Seçiniz! Bunlar : Bölge , Menzil, AD ya da Ap ,Özelliktir\n");
printf("Hangi Noxus Þampiyonusun ? \n");
printf("1.YAÞASIN Noxus\n2.HAÝN Demacialýyým\n3.Uzakçý\n4.Yakýncý\n5.AP\n6.AD\n7.Kýlýçlý\n8.Kan\n9.Sopa\n10.Ölü\n11.Lider\n12.Balta\n13.Hançer\n14.KýrýkKýlýçlý\n15.Yýlan\n16.Yalancý\n17.Tüfekli\n");
scanf("%d %d %d %d",  &secim1,&secim2,&secim3,&secim4);
if(secim1 == 1 && secim2 == 3 && secim3 ==6 && secim4==12 || secim4== 12){
	printf("Sen Draven deðil DRAAAAAAAVENSIN");
}
else if(secim1 == 1 && secim2 == 4 && secim3 ==5 && secim4 == 13  ){
	printf("Kaçarsan Sýrtýna Saplanan Hançeri Göremezsin! -Katarina");

}
else if(secim1 == 1 && secim2 == 3 && secim3 ==5 && secim4 == 8 ){
	printf("Herkesin içinde bir canavar yatar ayrýca kesinlikle Putin deðilim. -Vladimir");

}
else if(secim1 == 1 && secim2 == 4 && secim3 ==6 && secim4 == 7 ){
	printf("Kýlýçla yaþa kýlýçla öl -Talon");


}
else if(secim1 == 1 && secim2 == 4 && secim3 ==6 && secim4 == 14 ){
	printf("Kýrýk kýlýç yeniden dövülür -Riven");}
	

else if(secim1 == 1 && secim2 == 3 && secim3 ==5 && secim4 == 15 ){
	printf("Er ya da geç hepsi sürünerek dönecek. -Cassiopeia");}
	
	else if(secim1 == 1 && secim2 == 4 && secim3 ==6 && secim4 == 12 ){
	printf("Sadece benimle zafere ulaþýrsýn! -Darius");}
	
	else if(secim1 == 1 && secim2 == 4 && secim3 ==6 && secim4 == 10 ){
	printf("Döverým ulen hepinizi döverim! - Sion");}
	
		else if(secim1 == 1 && secim2 == 4 && secim3 ==6 && secim4 == 11 ){
	printf("Savunmalarý Çöküyor! - Swain");}
		else if(secim1 == 1 && secim2 == 3 && secim3 ==5 && secim4 == 16 ){
	printf("Ne yalan söyleyim söylediklerimin yüzde doksan beþi yalan.- LeBlanc");}
		else if(secim1 == 1 && secim2 == 4 && secim3 ==6 && secim4 == 17 ){
	printf("Yaklaþta Burnuna Tekmeyi Sokuverem !- Kled");}


	else {

	printf("HAÝN demacialý en kýsa sürede öldürüleceksin çünkü NOXUS KAN ÝSTÝYOR :\)");}
	


pause("system");

return 0;	
}
