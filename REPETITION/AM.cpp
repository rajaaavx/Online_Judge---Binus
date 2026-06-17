#include<stdio.h>

int main(){
	int tc, count;
	scanf("%d", &tc);
	for(int i = 0; i <tc; i++){
		scanf("%d", &count);
		printf("Case #%d:\n", i+1);
		for(int j = 1; j <= count; j++){
			
			if(j%15==0){
				printf("%d Lili\n", j);
			}else if(j%3==0 || j%5==0){
				printf("%d Jojo\n", j);
			}else{
				printf("%d Lili\n", j);
			}
		}
	}
	
	
	return 0;
}
