#include<stdio.h>
int
fib(int n)
{
  if(n<=2)
    return 1;
  else
    return fib(n-1)+fib(n-2);
}
int
main()
{
  int res = fib(4);
  printf("%d\n",res);
  return 0;
}
