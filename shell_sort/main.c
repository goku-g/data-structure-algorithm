#include <stdio.h>
#include <stdlib.h>

void shell_sort(int data[], int a)
{
    int i,j, temp, gap;

    for(gap = a/2; gap > 0; gap = gap/2)
    {
        for(j = gap; j< a; j++)
        {
            for(i = j-gap; i >= 0; i = i- gap)
             {
                 if(data[i+gap] <= data[i])
                 {
                     temp = data[i+gap];
                     data[i+gap] = data[i];
                     data[i] = temp;
                 }
                 else
                    break;
             }

        }
    }
}


int main()
{
    int n;
    int i;

    printf("**********************************************Sort by shellsort algorithm********************************************** \n");
    printf("How many number you want to enter? \n");
    scanf("%d", &n);
    int array_data[n];

    printf("Enter numbers respectively: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array_data[i]);
    }

    shell_sort(array_data, n);

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
