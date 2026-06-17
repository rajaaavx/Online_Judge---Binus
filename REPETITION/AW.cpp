#include<stdio.h>

int main(){
	int test, N;
	int max, count;
	
	scanf("%d", &test);
	
	for(int i = 0; i<test; i++){
		count = 0;
		scanf("%d", &N);
		
		int arr[N];
		
		for(int j = 0; j<N; j++){
			scanf("%d", &arr[j]);
		}
		max = arr[0];
		for(int j = 0; j<N; j++){
			if(arr[j]>= max){
				max = arr[j];
			}
		}
		for(int j = 0; j<N; j++){
			if(max==arr[j]){
				count++;
			}
		}
		
		printf("Case #%d: %d\n", i+1, count);
	}
	
	
	return 0;
}
