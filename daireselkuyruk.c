#include<stdio.h>
#include<locale.h>
#define BOYUT 5

int kuyruk[BOYUT],front=-1,rear=-1;
//enQueue ekleme i�lemedir..
void enQueue(int veri){
    if(rear == BOYUT){
        printf("KUYRUK DOLU KARDE��M NEY� EKL�YON ? \a\n");
    }
    else{
            if(front == -1)
                front=0;
            rear = (rear+1)%BOYUT;
            kuyruk[rear] = veri;
        }
    }







void deQueue(){

if(front == -1 || front > rear ){
    printf("DOSTUM KUYRU�UN BO�KEN NASIL �IKARTABILIRSIN ACABA ?");
   front = -1;
   rear = -1;
}
else{
    front = (front+1)%BOYUT;

}


}
void yazdir(){
int i;
for( i = front; i!=rear; i=(i+1)%BOYUT) {
            printf("%d ",kuyruk[i]);
        }
        printf("%d ",kuyruk[i]);
        printf("\n Rear -> %d \n",rear);
    }







int main(){
setlocale(LC_ALL,"Turkish");
	int secim;
	while(1==1){

	printf("\n1.enQueue islemi\n2.deQueue islemi\nYapilacak islemi seciniz..\n");
	scanf("%d",&secim);

	switch(secim){
		case 1:
		printf("\nEklemek istedigin sayiyi yaz\n");
		scanf("%d",&secim);
		enQueue(secim);
		yazdir();
		break;
		case 2:
			deQueue();
			yazdir();
			break;

	}
		}
System("pause");
}





