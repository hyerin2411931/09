#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 

int main(int argc, char *argv[])
{
  int i, average;
  int sum=0;
  int grade[SIZE];
  
  for(i = 0; i < SIZE; i++){   // <=SIZE 아니고 <SIZE 여야 SIZE 개수만큼 반복문 돌음.  
    printf("input grade:");
    scanf("%d", &grade[i]);
    sum += grade[i];
    }
  average = sum/SIZE;
  printf("average = %d\n", average);  
  
  
  system("PAUSE");	
  return 0;
}
