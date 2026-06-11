#include<stdio.h>

int main(){
	//R
//	long long int A, B, C, D, E, F, G, H, I, J, K, L, x, y, z;
//	
//	scanf("(%lld+%lld)x(%lld-%lld)", &A, &B, &C, &D);
//	getchar();
//	scanf("(%lld+%lld)x(%lld-%lld)", &E, &F, &G, &H);
//	getchar();
//	scanf("(%lld+%lld)x(%lld-%lld)", &I, &J, &K, &L);
//	getchar();
//	
//	x = (A+B)*(C-D);
//	y = (E+F)*(G-H);
//	z = (I+J)*(K-L);
//	
//	printf("%lld %lld %lld\n", x, y, z);

int a1,b1,c1,d1;
	int a2,b2,c2,d2;
	int a3,b3,c3,d3;
	
	scanf("(%d+%d)X(%d-%d)",&a1,&b1,&c1,&d1); getchar();
	scanf("(%d+%d)X(%d-%d)",&a2,&b2,&c2,&d2); getchar();
	scanf("(%d+%d)x(%d-%d)",&a3,&b3,&c3,&d3); getchar();
	
	int hasil1 = (a1+b1)*(c1-d1);
	int hasil2 = (a2+b2)*(c2-d2);
	int hasil3 = (a3+b3)*(c3-d3);
	
	printf("%d %d %d\n", hasil1, hasil2, hasil3);
	
	
	return 0;
}
