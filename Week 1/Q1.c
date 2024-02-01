#include<stdio.h>
int ls(int arr[] ,int n,int key,int *comp) 
{
for (int i=0 ; i< n; i++)
{ 
 (*comp)++ ;
 if (arr[i] == key)
   {
    return i;
   }
}
    return -1 ;
}

 int main() 
 {
  int n , key , comp = 0;
  printf("Enter the size of the array:\n");
  scanf("%d" , &n);
  
  int arr[n] ;
  printf("Enter the elements");
  for(int i=0 ;i<n ; i++)
    {
     scanf("%d", &arr[i]);
    }

  printf("Enter the key element to search: ");
  scanf("%d" , &key);

int result = ls(arr , n , key , &comp);
 if (result != -1)
  {
   printf("Element present %d \n" , result);
  }
else 
 {
  printf("Element not present \n");
 }
  printf ("Total number of comparison : %d \n" , comp);

  return 0 ;
}



