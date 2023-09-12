#include<stdio.h>

int main() {
  int upper = 0, lower = 0;
  char ch[100];
  scanf(" %[^\n]s", ch); /*A word or a sentence is accepted from test case data */

  /* Complete the remaining part of the code to store number of uppercase letters
  in the variable upper and lowercase letters in variable lower.
  The print part of already written. You can declare any variable if necessary */
  #include<string.h>

  int x, i;
  x = strlen(ch);
  for (i = 0; i < x; i++) {
    if (ch[i] > 64 && ch[i] < 90) {
      upper++;
    } else if (ch[i] > 96) {
      lower++;
    }
  }
  printf("Uppercase Letters : %d\n", upper); /*prints number of uppercase letters */
  printf("Lowercase Letters : %d", lower); /*prints number of lowercase letters */

  return (0);
}