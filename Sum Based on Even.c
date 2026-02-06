#include <stdio.h>

int main() {

    int n, arr[100];
    int evenIndexSum = 0, oddIndexSum = 0;
    int evenElementSum = 0, oddElementSum = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

      
        if(i % 2 == 0)
            evenIndexSum += arr[i];
        else
            oddIndexSum += arr[i];

       
        if(arr[i] % 2 == 0)
            evenElementSum += arr[i];
        else
            oddElementSum += arr[i];
    }

    printf("%d %d %d %d",
           
            evenElementSum,oddElementSum,evenIndexSum,oddIndexSum);

    return 0;
}
