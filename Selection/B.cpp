#include<stdio.h>

int main(){
	int T;
	int K, N, M;
	scanf("%d", &T);
	getchar();
 
  for(int i = 1; i<=T; i++){
   	  scanf("%d %d %d", &K ,&N ,&M);
      getchar();
      if(K<=N+M){
          printf("Case #%d: yes\n", i);
      }else{
          printf("Case #%d: no\n", i);
      }
  }
	
	return 0;
}
