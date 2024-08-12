#include<stdio.h>
int fun(int num)
  {
    if(num==6){
      return 0;
      }
      else
      {
        printf("%d ",num);
        num++;
        fun(num);
      }
    return 0;
  }
int main(){
  int num=1;
  fun(num);
  return 0;
}

