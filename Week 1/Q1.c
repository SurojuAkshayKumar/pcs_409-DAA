#include<stdio.h>
int ls(int arr[] ,int n,int key,int *comp) 
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
   for(int i=0 ;i<n ; i++)
    {
     scanf(""%d" , &arr[i]);
    }

  printf("Enter the key element to search: ");
  scanf("%d" , &key);

int result = ls((arr , n , key , &comp);
 if (result != -1)
  {
   printf("Element present %d \n" , result);
  }
else 
 {
  printf("Element not present \n");
 }
  printf ("Totak number of comparison : %d \n" , comp);

  return 0 ;
}



