#include<stdio.h>

int main(){
	int x, y, k;
	scanf("%d %d %d", &x, &y, &k); getchar();
	
	if(x < k && y > k){
		int jarak1 = y-k;
		int jarak2 = k-x;
		
		if(jarak1 == jarak2){
			printf("%d\n", jarak2);
		}else{
			printf("-1\n");
		}
		
	}else{
		printf("-1\n");
	}
	
	return 0;
}
