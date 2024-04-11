#include <stdio.h>
#include <stdlib.h>


void sort(int data[], int a, int low, int high)
{
   int mid;

   if(low < high)
    {
      mid = (low + high) / 2;

      sort(data, a, low, mid);
      sort(data, a, mid+1, high);
      merge_data(data, a, low, mid, high);
   }
   else
    {
      return;
    }
}


void merge_data(int data[], int a, int low, int mid, int high) {
   int i, j, k;
   int demo[a-1];

   for(j = low, k = mid + 1, i = low; j <= mid && k <= high; i++) {
      if(data[j] <= data[k])
         demo[i] = data[j++];
      else
         demo[i] = data[k++];
   }

   while(j <= mid)
      demo[i++] = data[j++];

   while(k <= high)
      demo[i++] = data[k++];

   for(i = low; i <= high; i++)
      data[i] = demo[i];
}
int main()
{
    int n;
    int i;

    printf("********************************************Sort by mergesort Algorithm********************************************* \n");
    printf("How many number you want to enter? \n");
    scanf("%d", &n);
    int array_data[n];

    printf("Enter numbers respectively: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array_data[i]);
    }

    sort(array_data, n, 0, n);

    printf("sorted array is: \n");
    printf("[ ");
    for(i=0; i<n; i++)
    {

        printf("%d ",array_data[i]);
        if(i != n-1)
            printf(",");
        else
            printf("]");
    }

    return 0;

}
