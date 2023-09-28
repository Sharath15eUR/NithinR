#include <stdio.h>
int binary_conversion(int); //function to convert binary to decimal number
int main()
  {
  int num, bin;  //num is the decimal number and bin is the binary equivalent for the number

  scanf("%d", &num); //The decimal number is taken from the test case data
  bin = binary_conversion(num); //binary number is stored in variable bin
  printf("The binary equivalent of %d is %d\n", num, bin);
  return 0;
  }
int binary_conversion(int decimal) {
  int binary = 0, base = 1;

  while (decimal > 0) {
    int remainder = decimal % 2; 
    binary += remainder * base; 
    decimal /= 2;
    base *= 10;
  }

  return binary;
}