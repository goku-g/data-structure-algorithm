#include <stdio.h>
#include <stdlib.h>

void exchange_sort(int data[], int a)
{
    int i,j, temp;

    for(j=0; j < a-1; j++)
    {
        for(i=j; i< a-1; i++)
        {
            if( data[j] > data[i+1] )
            {
                temp = data[i+1];
                data[i+1] = data[j];
                data[j] = temp;
            }

        }
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

    printf("********************************************Sort by Exchangesort algorithm******************************************** \n");
    printf("How many number you want to enter? \n");
    scanf("%d", &n);
    int array_data[n];

    printf("Enter numbers respectively: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array_data[i]);
    }

    exchange_sort(array_data, n);

    return 0;

}
