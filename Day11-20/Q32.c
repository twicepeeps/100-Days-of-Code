/*
Write a program to check if a number is a palindrome.
*/
#include <stdio.h>
int main(){
  int n , rev = 0 , temp;
  scanf("%d" , &n);
  temp = n;
  while (temp>0){
    rev = rev*10 + temp%10;
    temp/= 10;
  }
  if (n == rev)
    printf("number is a palindrome. ");
  else
    printf("number is not palindrome");




  return 0;
}

