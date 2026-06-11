#include<stdio.h>

int main(){
	char kata1[101];
	char kata2[101];
	char kata3[101];
	
	scanf("%s %s %[^\n]", kata1, kata2, kata3);
	printf("%s %s %s\n", kata3, kata2, kata1);
	
	
	return 0;
}
