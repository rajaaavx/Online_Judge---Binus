#include<stdio.h>

int main(){
	int daging, sayur, telur;
	
	scanf("%d %d %d", &daging, &sayur, &telur); getchar();
	
	if(daging > sayur && sayur > telur){
		printf("Daging\n");
		printf("Sayur\n");
		printf("Telur\n");
	}else if(daging > telur && telur > sayur){
		printf("Daging\n");
		printf("Telur\n");
		printf("Sayur\n");
	}else if(sayur > telur && telur > daging){
		printf("Sayur\n");
		printf("Telur\n");
		printf("Daging\n");
	}else if(sayur > daging && daging > telur){
		printf("Sayur\n");
		printf("Daging\n");
		printf("Telur\n");
	}else if(telur > sayur && sayur > daging){
		printf("Telur\n");
		printf("Sayur\n");
		printf("Daging\n");
	}else if(telur > daging && daging > sayur){
		printf("Telur\n");
		printf("Daging\n");
		printf("Sayur\n");
	}
	
	return 0;
}
