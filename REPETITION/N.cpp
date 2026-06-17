#include<stdio.h>

int main(){
	int test;
	long long int cup, P, b, newc;
	
	scanf("%d", &test); getchar();
	
	for(int i = 1; i<=test; i++){
		 
		scanf("%lld %lld", &cup, &P); getchar();
		b = cup;
		
		while(cup >= P){
			newc = cup/P;
			b += newc;
			cup = newc + cup % P;
		}
		printf("Case #%d: %lld\n", i, b);
	}
	
	return 0;
}
