#include<stdio.h>

int main(){
	int N;
	int A, B;
	scanf("%d", &N); getchar();
	
	for(int i=0;i<N;i++){
		scanf("%d %d", &A, &B); getchar();
		int perkenalan = A*B;
		
		if(perkenalan%2==0){
			printf("Case #%d: Party time!\n", i+1);
			}else{
			printf("Case #%d: Need more frogs\n", i+1);
			}
		
	}
	
	return 0;
}
