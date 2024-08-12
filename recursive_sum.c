#include<stdio.h>
int getSum(int num)
{
  if(num<=1)
    return num;
  return num + getSum(num-1);
}
int main(){
    int num = 5;
    printf("%d",getSum(num));
    return 0;
}


