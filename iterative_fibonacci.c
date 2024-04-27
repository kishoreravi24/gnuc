#include<stdio.h>
int
fib(int n)
{
  int last = 1;
  int prev = 0;
  int i;
  for(i=1;i<n;i++)
  {
    int next = prev+last;
    prev=last;
    last=next;
  }
return last;
}
int
main(){
  int res = fib(5);
  printf("%d\n",res);
  return 0;
}
