#include<stdio.h>

int main(){
	
	long long int N, P, X;
	int count = 0;
	
	scanf("%d %d", &N, &P); getchar();
	
	int arr[N];
	
	for(int i = 0; i < N; i++){
		scanf("%d", &arr[i]); getchar(); 
	}
	for(int i = 0; i<N ; i++){
		if(arr[i]<P){
			count++;
		}
		
	}
	printf("%d\n", count);
	
	
	return 0;
}
