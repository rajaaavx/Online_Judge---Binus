#include<stdio.h>

int main(){
	int tc;
	
	scanf("%d", &tc); getchar();
	
	for(int N = 1 ; N <= tc ; N++){
		int n;
		scanf("%d", &n); getchar();
		printf("Case #%d:\n", N);
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				if( j <= n-i ){
					printf(" ");
				}else if((i+j)%2==0){
					printf("*");
				}else if((i+j)%2==1){
					printf("#");
				}
			}
			printf("\n");
		}
		
		
		
		
	}
	
	
	return 0;
}
