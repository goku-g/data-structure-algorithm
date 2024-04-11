#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int data[], int a)
{
    int i,j,k, temp;

    for(j=1; j < a; j++)
    {
        temp = data[j];
        k = j-1;

        while(k >= 0 && temp <= data[k])
        {
            data[k+1] = data[k];
            k = k-1;

        }
        data[k+1] = temp;
    }

    printf("sorted array is: \n");
    printf("[ ");
    for(i=0; i<a; i++)
    {

        printf("%d ",data[i]);
        if(i != a-1)
            printf(",");
        else
            printf("]");
    }

}

int main()
{
    int n;
    int i;

    printf("***********************************************Sort by Insertion algorithm********************************************** \n");
    printf("How many number you want to enter? \n");
    scanf("%d", &n);
    int array_data[n];

    printf("Enter numbers respectively: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array_data[i]);
    }

    insertion_sort(array_data, n);

    return 0;

}
