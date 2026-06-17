#include<stdio.h>

int main(){
	int tc, A, B, bit;
	
	scanf("%d", &tc); getchar();
	
	for(int i=0 ; i<tc ; i++){
		
		scanf("%d %d", &A, &B); getchar();
		
		bit = (A>>B) & 1;
		
		printf("%d\n", bit);
		
	}
	
	return 0;
}
