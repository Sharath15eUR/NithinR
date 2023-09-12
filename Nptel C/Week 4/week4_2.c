#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c); /*The length of three sides are entered from the test cases */
 
/* Complete the program. Copy and paste from the printf statements mentioned below wherever required for printing the outputs 

printf("Triangle is not possible");
printf("Right-angle Triangle");
printf("Isosceles Triangle");
printf("Equilateral Triangle");
printf("Scalene Triangle");

*/
int sum = 0;
int hyp = 0;
if(a==b && a==c){
  if(b==c){
	 printf("Equilateral Triangle"); 
  }
}
else if(a==0 || c==0 || b==0){
	 printf("Triangle is not possible");
}
else if(a!=b && a!=c){
  if(b!=c){
  	sum = ((a*a) + (b*b));
    hyp = c*c;
    if(sum == hyp){
    	printf("Right-angle Triangle");
    }
    else{
    	printf("Scalene Triangle");
    }
  }
}
else if(a == b || a == c || b == c){
	printf("Isosceles Triangle");
}
else{
printf("Triangle is not possible");
}
return 0;
}