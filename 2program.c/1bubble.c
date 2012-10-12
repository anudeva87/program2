/* program for perfoming bubblesort*/
#include<stdio.h>
int main()
{
    int array[20], i,limit,j,temp;
    printf(" Enter the limit of the array \n");
    scanf("%d", &limit);    //reading the limit value
    printf("Enter the array\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);   //reading the array elements
    }
    for (i = 0; i < limit-1; i++)
    {
        for(j=0;j< limit-1;j++)
        {
            if(array[j]>array[j+1])
            {

                temp = array[j ];
                array[j] = array[j+1];
                array[j+1] = temp;

            }
        }

    }
    printf(" Sorted Array  ");
    for (i = 0; i < limit; i++)
    {
        printf("%d \t", array[i]);   //sorted array 
    }

}
