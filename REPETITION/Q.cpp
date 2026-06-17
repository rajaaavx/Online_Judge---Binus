#include<stdio.h>

int main(){
	int range;
	long long int total, target, formL, formF;
	
	scanf("%d", &range); 
	
	for(int i = 0; i <range; i++){
		
		scanf("%lld %lld", &total, &target); getchar();
		
		if(target%2==0){
			formL = (total-target)/2;
		}else{
			formL = (total-target+1)/2;
		}
		
		printf("Case #%d: ", i+1);
		
		formF = target/2;
		
		if(formF<=formL){
			printf("%lld\n", formF);
		}else{
			printf("%lld\n", formL);
		}
	} 
	
	
	return 0;
}
