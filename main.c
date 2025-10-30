#include <stdio.h>
#include <stdlib.h>
#define SIZE 5  //전처리기. 매크로. SIZE라는 거를 전부 5로 바꿈. 


int main(int argc, char *argv[])
{
  int i;
  int a[SIZE] = {1,3,3,4,5};
  int b[SIZE] = {1,2,3,4,5};
  int flag_same = 1;
  
  for(i = 0; i < SIZE; i++)
  {
    if(a[i] != b[i])
    {
      printf("%d번째 배열은%d, %d로  다른  값을 가집니다.\n", i, a[i], b[i]);
      flag_same = 0;
    }
    else
    printf("배열은 같은 값을 가집니다.\n"); 
  } 
  
  
  system("PAUSE");	
  return 0;
}
