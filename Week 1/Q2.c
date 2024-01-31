9#include<stdio.h>
int bs(int arr[] , int size , int key , int *comp;
{
 int low = 0 , high = size - 1 ;
 while (low <= high ){
 int mid = (low + high)/ 2 ;
 (*comp)++;
  if (arr[mid] == key)
  {
   return 1;
  }
else if (arr[mid] < key)
  {
  low = mid + 1 ;
  }
else 
  {
   high = mid - 1 ;
  }
 }
return 0 ;
}

int main()
{
 int size ;
 printf("Enter the size of the array: ");
 scanf("%d" , &size);

int arr[size];
printf("Enter elements ");
for (innt i = 0; i< size ; i++)
{
 scanf("%d" , &arr[i]);
}

int key;
printf("Enter the key to find : ");
scanf("%d" , &key);

int comp= 0 ;
int result = bs(arr ,size ,key , &comp);
if(result)
{
 printf("Element %d found \n" ,key );
}
else 
{
printf("Element %d not found \n" ,key );
}
printf("Total number of comparison: %d\n" ,comp);
return 0;
}

