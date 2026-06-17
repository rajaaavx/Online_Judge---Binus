#include <stdio.h>

int main()
{
    int range, arrSize;
    int count;
    int bitOn, bitOff;
    scanf("%d", &range);

    for (int i = 0; i < range; i++)
    {
        scanf("%d", &arrSize);
        long long int arr[arrSize];
        for (int j = 0; j < arrSize; j++)
        {
            scanf("%lld", &arr[j]);
        }
        bitOn = 0;
        bitOff = 0;
        for (int j = 0; j < arrSize - 1; j++)
        {
            for (int k = j + 1; k < arrSize; k++)
            {
                count = 0;
                long long int xorValue = arr[j] ^ arr[k]; 
                while (xorValue > 0)
                {
                    count += xorValue & 1; 
                    xorValue >>= 1;
                }
                if (count >= 3)
                {
                    bitOn++;
                }
                else
                {
                    bitOff++;
                }
            }
        }
        printf("Case #%d: %d %d\n", i + 1, bitOn, bitOff);
    }
    return 0;
}
