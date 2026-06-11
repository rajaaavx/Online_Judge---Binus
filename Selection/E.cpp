#include<stdio.h>

int main(){
	long long int A, B, C, D;
	
	scanf("%lld %lld %lld %lld", &A, &B, &C, &D); getchar();
	
	long long int left = A*B;
	long long int right = C+D;
	
	if(left>right){
		printf("True\n");
	}else{
		printf("False\n");	
	}
	return 0;
}
