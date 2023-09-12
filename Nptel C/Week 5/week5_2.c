#include <stdio.h>
 int main()
{
    int N; 
    scanf("%d",&N); /*The number is accepted from the test case data*/

/* Complete the rest of the code. Please use the printf statements as below
by just changing the variables used in your program 

printf("The number %d contains %d digits.",N,count);

*/
int count=0, x;
x = N;
while(N>0){
	N = N / 10;
  	count++;
}
printf("The number %d contains %d digits.",x,count);
return 0;
}