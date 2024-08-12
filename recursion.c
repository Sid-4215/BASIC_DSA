#include<stdio.h>
int fun(int num)
  {
    if(num==0){
      return 0;
      }
      else
      {
        printf("%d ",num);
        num--;
        fun(num);
      }
    return 0;
  }
int main(){
  int num=5;
  fun(num);
  return 0;
}

