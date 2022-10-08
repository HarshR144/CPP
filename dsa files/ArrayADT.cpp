#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Array
{ int *A;
  int size;
  int length;

};

void Display(struct Array ar)
{
  int i;
  printf("\n ELements in array \n");
  for(i=0;i<ar.length;i++)
    
    printf("%d",ar.A[i]);

  
}

int main() {
struct Array arr;
printf("mention size of an array");
scanf("%d",&arr.size);
arr.A=(int*)malloc(arr.size*sizeof(int));
arr.length=0;

int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
  scanf("%d",&arr.A[i]);
arr.length=n;
Display(arr);
  return 0;
}