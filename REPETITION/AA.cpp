#include<stdio.h>

int main(){
	int N, k;
	int count = 0;
	
	scanf("%d", &N); getchar();
	
	for(int i = 0; i<N; i++){
		scanf("%d", &k); getchar();
		
		count += k;
	
		if(count == 9){
			count = 21;
		}else if(count == 33){
			count = 42;
		}else if(count == 76){
			count = 92;
		}else if(count == 53){
			count = 37;
		}else if(count == 80){
			count = 59;		
		}else if(count == 97){
			count = 88;
		}
	}
	printf("%d\n", count);
	
	
	return 0;
}
