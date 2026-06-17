#include<stdio.h>
void kotak(int panjang, int tinggi){
	
	scanf("%d %d", &panjang, &tinggi); getchar();
	
	for(int j=0; j<panjang; j++){
		for(int k=0; k<tinggi; k++){
			if(j==1||k==tinggi||k==1||j==panjang){
				printf("#");
			}else{
				printf(" ");
			}
		}
	}
	
}


int main(){
	int N, panjang, tinggi;
	
	scanf("%d", &N); getchar();
	
	for(int i = 0; i < N; i++){
		printf("Case #%d:\n", i+1);
		kotak(panjang, tinggi);
	}
	
	return 0;
}
