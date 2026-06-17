#include<stdio.h>

int main(){
	int tc;
	int N;
	long long int input, hasil;
	
	scanf("%d", &tc); getchar();
	
	for(int i = 1; i<=tc; i++){
		
		hasil = 0;
		
		scanf("%d", &N); getchar();
		
		for(int j = 0; j<N; j++){
		
			scanf("%lld", &input);
			hasil += input;
			
		}
		printf("Case #%d: %lld\n", i, hasil);
	}
	
	
	
	return 0;
}
