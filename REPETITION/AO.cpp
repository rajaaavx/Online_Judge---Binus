#include<stdio.h>
#include<string.h>

int main(){
	
	int N;
	scanf("%d", &N);
	getchar();
	
	for(int i = 0; i <= N; i++){
		int len;
		scanf("%d", &len);
		getchar();
		
		char array[len+1];
		scanf("%[^\n]", array);
		getchar();
		
		printf("Case #%d: ", i+1);
		for(int j = 0; j < len; j++){
			if(array[j] >= 'a' && array[j] <= 'z'){
				printf("%c", array[j]);
			}else{
				continue;
			}
		}
		printf("\n");
	}
	
	return 0;
}
