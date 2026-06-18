#include <stdio.h>

int main()
{
    int arr1[3]={1,3,5};
    int arr2[3]={2,4,6};
    int arr3[6];
    int k=0;

    for(int i=0;i<3;i++)
        arr3[k++]=arr1[i];

    for(int i=0;i<3;i++)
        arr3[k++]=arr2[i];

    int s = sizeof(arr3)/sizeof(arr3[0]);
    int temp;

    for(int i=0;i<s-1;i++)
    {
        for(int j=0;j<s-i-1;j++)
        {
            if(arr3[j] > arr3[j+1])
            {
                temp = arr3[j];
                arr3[j] = arr3[j+1];
                arr3[j+1] = temp;
            }
        }
    }

    float ma;

    if(s%2==0)
    {
        ma = (arr3[s/2] + arr3[(s/2)-1]) / 2.0;
    }
    else
    {
        ma = arr3[s/2];
    }

    printf("Median = %.2f", ma);

    return 0;
}