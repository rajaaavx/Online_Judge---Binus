#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);

	int b[a+2]; 
	int step=0;
	for(int i=0;i<a;i++){
		scanf("%d",&b[i]);
		step += b[i];
		
		if (step == 12){
		step =28;
		}else if (step == 35){
		step = 7;
		}else if (step == 30){
		step = 10;
		}else if (step>=40){
		step-=40;
		}

	}	
	printf("%d\n",step);
	
	return 0;
}
