#include<stdio.h>

int main(){
	int a;
    scanf("%d", &a);   

    for (int i = 0; i < a; i++) {
        int arrSize;
        scanf("%d", &arrSize);  

        long long int sum = 0;
        long long int arr[arrSize];

        for (int j = 0; j < arrSize; j++) {
            scanf("%lld", &arr[j]);  
            sum += arr[j];
        }

        long long int leftSum = 0;
        bool check = false;

        for (int j = 0; j < arrSize; j++) {
            if (leftSum == sum - leftSum) {  
                check = true;
                break;
            }
            leftSum += arr[j];
        }

        printf("Case #%d: %s\n", i + 1, check ? "Yes" : "No");  
    }

	
	
	return 0;
}
