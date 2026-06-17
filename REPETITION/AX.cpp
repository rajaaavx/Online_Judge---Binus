#include<stdio.h>

int main(){
	long long int range;
	scanf("%lld", &range); getchar();
	long long int profit[range];
	long long int count = 0;
	for(int i = 0; i<range; i++){
		scanf("%lld", &profit[i]); getchar();
		
		if(profit[i]>0){
			count += profit[i];
		}else{
			continue;
		}
	}
	printf("%lld\n", count);
	
	
	return 0;
}
