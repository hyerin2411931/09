#include <stdio.h>
#include <stdlib.h>
#define SIZE 4  //전처리기. 매크로. SIZE라는 거를 전부 5로 바꿈. 

void square_array(int a[], int size);
void print_array(int a[], int size);

int main(int argc, char *argv[])
{
  int list[SIZE] = {1,2,3,4};
  
  print_array(list, SIZE);
  square_array(list, SIZE);    //배열은 복사본이 아니라 원본을 가져오니까 배열 안의 값 자체가 바뀌게 됨. 
  print_array(list, SIZE);
  
  system("PAUSE");	
  return 0;
}

void square_array(int a[], int size){
  int i;
  
  for(i=0; i < size; i++)
    a[i] = a[i]*a[i];}
  
void print_array(int a[], int size){
  int i;
  
  for(i=0; i < size; i++)
    printf("%3d", a[i]);
  printf("\n");}
