#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 

int main(int argc, char *argv[])
{
  int i, average;
  int sum=0;
  int grade[SIZE];
  
  for(i = 0; i < SIZE; i++){   // <=SIZE �ƴϰ� <SIZE ���� SIZE ������ŭ �ݺ��� ����.  
    printf("input grade:");
    scanf("%d", &grade[i]);
    sum += grade[i];
    }
  average = sum/SIZE;
  printf("average = %d\n", average);  
  
  
  system("PAUSE");	
  return 0;
}
