#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array  ");
    scanf("%d",&n);
    int arr[n];
    printf("\n\nEnter %d elements ", n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\nThe array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    int max=arr[0];
    int i,  loc=1;


    for (i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            loc=i;
        }
    }
    printf("\n The max value is: %d\n  The location of the Max value: %d\n\n",max,loc);
    return 0;
}
