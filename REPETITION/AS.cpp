#include<stdio.h>

int main(){
	int tc, count, N;
	
	scanf("%d", &tc);
	
	for(int i = 0; i<tc; i++){
		count = 0;
		
		scanf("%d", &N);
		char s[N+1];
		char k[N+1];
		
		for(int j = 0; j<N; j++){
			scanf(" %c", &s[j]); 
		}
		
		for(int j = 0; j<N; j++){
			scanf(" %c", &k[j]);
		}
		
		for(int j = 0; j<N; j++){
			if(k[j] == s[j]){
				count++;
			}
		}
		float nilai = ((float)count/N)*100;
		
		
		printf("Case #%d: %.0f\n", i+1, nilai);
	}
	
	
	return 0;
}
