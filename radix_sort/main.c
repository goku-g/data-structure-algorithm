#include <stdio.h>
#include <stdlib.h>

int greatest(int arry[], int n)
{
    int large = arry[0], j;

    for(j=1; j<n; j++)
    {
        if ( arry[j] > large)
        {
            large = arry[j];
        }
    }

    //printf("%d", large);
    return large;
}

void Sort(int data[], int a)
{
    int i, j, k, rem, pn =0, div=1, larger, pass;
    int temp[10][10], temp_count[10];

    larger = greatest(data, a);

    while(larger > 0)
    {
        pn = pn +1;
        larger /= 10;
    }

    for(pass=0; pass<pn; pass++)
    {
        for(i=0;i<10;i++)

        temp_count[i] = 0;

        for(i=0; i<a; i++)
        {
            rem = ( data[i] /div ) % 10;

            temp[rem][temp_count[rem]] = data[i];

            temp_count[rem] += 1;
        }

        i=0;
        for(k=0; k<10; k++)
        {
            for(j=0; j<temp_count[k]; j++)
            {
                data[i] = temp[k][j];
                i++;
            }
        }
        div *= 10;

    }


}

int main()
{
    int n;
    int i;

    printf("*********************************************Sort by radixsort Algorithm********************************************** \n");
    printf("How many number you want to enter? \n");
    scanf("%d", &n);
    int array_data[n];

    printf("Enter numbers respectively: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array_data[i]);
    }

    Sort(array_data, n);


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
