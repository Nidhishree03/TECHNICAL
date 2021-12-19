#include<stdio.h>
int main()
{
  int a=30,b=40;
  printf("before swap a=%d b=%d",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after swap a=%d b=%d",a,b);
  return 0;
}
