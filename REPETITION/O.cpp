#include<stdio.h>

int main(){
	int range, jumlah;
	long long int lili, a, p, max;
	
	scanf("%d", &range);
	
	for(int i = 0; i < range; i++){
		
		scanf("%d %lld %lld", &jumlah, &lili, &a); getchar();
		max = a;
		
		for(int j = 0; j <jumlah; j++){
			
			scanf("%lld", &p); getchar();
			if(p<=lili && p>max){
				max=p;
			}
			
		}
		printf("Case #%d: %lld\n", i+1, max);
	}
	
	return 0;
}
