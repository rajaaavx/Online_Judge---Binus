#include<stdio.h>

int main(){
	int tc;
	long long int num;
	long long int count;
	
	scanf("%d", &tc); getchar();
		
	for(int i = 0; i<tc ; i++){
		count = 0;
		scanf("%lld", &num); getchar();
		
		if(num == 0){
			printf("Case #%d: 1\n", i+1);
		}else{
			while(num != 0){
				
				num = num/10;
				count++;
			}
			printf("Case #%d: %lld\n", i+1, count);
		}
	
	}
	
	return 0;
}
