#include<stdio.h>
#include<string.h>

int main(){
	int test;
	int countL;
	int countB;
	char lomba[101];
	scanf("%d", &test); 
	
	for(int i = 0 ; i < test; i++)
	{	
		countL = 0;
		countB = 0;
		int size; 
		scanf("%d", &size);
		
		scanf("%s", lomba); getchar();
		int hasil = strlen(lomba);
		
		for(int j = 0; j<hasil ; j++)
		{
			if(lomba[j] == 'L'){
				countL++;
			}else if(lomba[j] == 'B'){
				countB++;
			}
		}
		
		if(countL > countB){
			printf("Lili\n");
		}else if(countB > countL){
			printf("Bibi\n");
		}else{
			printf("None\n");
		}
		
	}
	
	
	return 0;
}
