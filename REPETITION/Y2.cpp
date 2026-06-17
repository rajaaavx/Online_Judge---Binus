#include<stdio.h>

int main(){
	int N, panjang, tinggi;
	
	scanf("%d", &N); getchar();
	
	for(int i = 0; i < N; i++){
		scanf("%d %d", &panjang, &tinggi); getchar();
		printf("Case #%d:\n", i+1);
		for(int j=1; j<=panjang; j++){
			for(int k = 1; k<=tinggi; k++){
				
				if(j==1||k==tinggi||k==1||j==panjang){
					printf("#");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}
