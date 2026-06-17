#include<stdio.h>

int main(){
	long long int TC, tc, ts, tu, count = 0;
	
	scanf("%lld", &TC); getchar();
	
	for(int i = 0; i < TC; i++)
	{
		scanf("%lld %lld %lld", &tc, &ts, &tu); getchar();
		
		if(ts > tu){
			count++;
		}
	}
	printf("%lld\n", count);
	
	return 0;
}
