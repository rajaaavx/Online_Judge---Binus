#include<stdio.h>

int main(){
	int tc, N, A, B, C, D;
	
	scanf("%d", &tc); getchar();
	
	for(int i = 1; i<= tc; i++){
		scanf("%d %d %d %d %d", &N, &A, &B, &C, &D); getchar();
		int count = 0;
		for(int j = 1; j<=N; j++){
			if( j%A==0 || j%B==0 || j%C==0 || j%D==0 ){
				count++;
			}
		}
		printf("Case #%d: %d\n", i, count);
	}
	
	
	
	return 0;
}
