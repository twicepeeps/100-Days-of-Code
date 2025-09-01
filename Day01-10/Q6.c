/* Q->6 program in c to swap two numbers using a third variable.
*/

#include <stdio.h>
int main(){
  int a , b , c;
  printf("Enter two numbers: ");
  scanf("%d %d" , &a , &b);
  printf("Numbers before swapping:a = %d, b = %d\n" , a , b);
  c = a;
  a = b;
  b = c;
  printf("Swapped Numbers are: a = %d b =%d" , a , b);

}
