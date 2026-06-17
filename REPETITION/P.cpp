#include<stdio.h>

int main(){
	int test;
	long long int finish, first, count, step;
	
	scanf("%d", &test);
	
	for(int i=0; i<test; i++)
	{
		 step = 0;
		 first = 1;
		 count = 1;
		 
		 scanf("%lld", &finish);
		 
		while(first <= finish)
		{
			step++;
			first += count;
			count++;
		}
		printf("Case #%d: %d\n", i+1, step);
	}
	
	return 0;
}
