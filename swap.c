#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int [], int, int );
void ssort(int [], int);


void ssort(int ar[], int l)
{
   for (int i=0;i<l;i++)
   {  
      swap_max(ar,l,i);
   }
  
}


void swap_max(int ar[], int l, int n )
{  int mx_index=n;
   int tmp;
   for (int i=n+1; i<l;i++)
   {
      if(ar[i]>ar[mx_index])
      {
         mx_index=i;
      }
   }
  tmp=ar[n];
  ar[n]=ar[mx_index];
  ar[mx_index]=tmp;
}
