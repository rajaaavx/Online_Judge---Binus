#include<stdio.h>

int main(){
	int N;
	int A, B;
	scanf("%d", &N); getchar();
	
	for(int i=0;i<N;i++){
		scanf("%d %d", &A, &B); getchar();
		
		if(A>B){
			printf("Case #%d: Go-Jo\n", i+1);
		}else{
			printf("Case #%d: Bi-Pay\n", i+1);
		}
		
	}
	
	
	return 0;
}
