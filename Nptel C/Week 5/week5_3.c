#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); /* The value of N is taken from the test case data */
 
/* Complete the code.
Use the printf statements as below
printf("%d is a number that can be expressed as power of 2.",N);
printf("%d cannot be expressed as power of 2.",N);
*/
int i, ans, flag = 0;
    
    for (i = 0; i < N; i++) {
        ans = 1 << i; // Calculate power of 2 using left shift
        if (ans == N) {
            flag = 1;
            break; // No need to continue checking once we find a match
        }
        ans = 0;
    }
    
    if (flag == 1) {
        printf("%d is a number that can be expressed as power of 2.",N);
    } else {
        printf("%d cannot be expressed as power of 2.",N);
    }
    
    return 0;
}