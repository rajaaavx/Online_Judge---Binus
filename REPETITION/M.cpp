#include<stdio.h>

int main(){
	int test;
	int menu, duit;
	scanf("%d", &test);
	
	for(int i = 1; i<=test ; i++)
	{
		scanf("%d %d", &menu, &duit); getchar();
		int arr[menu+1];
		int count = 0;
		
		for(int j = 0; j<menu; j++)
		{
			scanf("%d", &arr[j]);
			count += arr[j];
		}
		
		if(count<=duit){
			printf("Case #%d: No worries\n", i);
		}else{
			printf("Case #%d: Wash dishes\n", i);
		}
		
	}
	
	return 0;

}
