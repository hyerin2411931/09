#include <stdio.h>
#include <stdlib.h>
#define SIZE 5  //��ó����. ��ũ��. SIZE��� �Ÿ� ���� 5�� �ٲ�. 


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
      printf("%d��° �迭��%d, %d��  �ٸ�  ���� �����ϴ�.\n", i, a[i], b[i]);
      flag_same = 0;
    }
    else
    printf("�迭�� ���� ���� �����ϴ�.\n"); 
  } 
  
  
  system("PAUSE");	
  return 0;
}
