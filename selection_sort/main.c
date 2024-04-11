#include <stdio.h>
#include <stdlib.h>

int smallest(int arry[], int n, int k)
{
    int small = arry[k], j, spos;

    for(j=k; j<n; j++)
    {
        if ( arry[j] < small)
        {
            small = arry[j];
            spos = j;
        }
    }
    return spos;
}

void selection_sort(int data[], int a)
{
    int i, temp, spos;

    for(i=0; i<a; i++)
    {
        spos = smallest(data, a, i);
        temp = data[spos];
        data[spos] = data[i];
        data[i] = temp;
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

    printf("********************************************Sort by selectionsort Algorithm********************************************* \n");
    printf("How many number you want to enter? \n");
    scanf("%d", &n);
    int array_data[n];

    printf("Enter numbers respectively: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array_data[i]);
    }
    selection_sort(array_data, n);

    return 0;
}
