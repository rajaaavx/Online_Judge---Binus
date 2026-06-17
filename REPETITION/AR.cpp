#include<stdio.h>

int main(){
	int jumlah, besar;
	
	scanf("%d %d", &jumlah, &besar); getchar();
	
	for(int N = 1; N <= jumlah; N++){
		for(int i = 1; i<=besar; i++){
			for(int j = 1; j<=besar; j++){
				if(j <= besar - i){
					printf(" ");
				}else{
					printf("*");
				}
			}
		printf("\n");
		}
	}
	
	
	return 0;
}
