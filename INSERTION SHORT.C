#include <stdio.h>
int main()
{
  int arr[100],n,key,temp,i,j;
  printf("Enter size of array\t");
  scanf("%d",&n);
  printf("Enter a array\n");
  for(i = 0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    temp = arr[i];
    j = i-1;
    while(temp<arr[i]&&j>=0)
    {
      arr[j+1] = arr[j];
      --j;
    }
    arr[j+1] = temp;
  }
  printf("sorted element are : \n");
  for(i = 0;i<n;i++)
  {
    printf("%d\n",arr[i]);
  }
  printf("\n");
  return 0;
}