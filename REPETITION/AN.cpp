#include<stdio.h>

int main(){
	int tc;
	int a, b, c, d, e, f;
	
	scanf("%d", &tc); getchar();
	
	for(int i = 1 ; i <=tc ; i++){
		scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f); getchar();
		printf("Case #%d: ", i);
		for(int j = 0; j<a; j++){
			printf("a");
		}
		for(int k = 0 ; k < b; k++){
			printf("s");
		}
		for(int l = 0 ; l < c; l++){
			printf("h");
		}
		for(int m = 0 ; m < d; m++){
			printf("i");
		}
		for(int n = 0 ; n < e; n++){
			printf("a");
		}
		for(int o = 0 ; o < f; o++){
			printf("p");
		}
		
		printf("\n");
		
	}
	
	
	return 0;
}
