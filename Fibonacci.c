#include<stdio.h>
int f(int x){
	if(x<=2)
	return 1;
	return f(x-1)+f(x-2);
}
int main(){
	int i;
	for (i=0;i<10;i++){
		printf("%d\n",f(i));
	}
	return 0;
}
