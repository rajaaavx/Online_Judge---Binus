#include<stdio.h>

int main(){
	int test;
	
	scanf("%d", &test);
	
	for(int t = 0; t<test; t++){
		int N;
		scanf("%d", &N);
		int arr[N];
		
		for(int i = 0; i<N; i++){
			scanf("%d", &arr[i]);
		}
		int count = 0;
		
		for(int i = 0; i<N; i++){
			for(int j = 0; j<N; j++){
				for(int k = j+1; k<N; k++){
					if(arr[i] == arr[j] + arr[k]){
						count++;
						break;
					}
				}
			}
		}
		printf("Case #%d: %d\n", t+1, count);
	}
	return 0;
}
