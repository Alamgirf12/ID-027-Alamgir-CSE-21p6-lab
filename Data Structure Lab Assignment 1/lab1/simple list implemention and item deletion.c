#include<stdio.h>

int main()
{
    int arr[30];
    int n;
    int i;
    printf("Enter the size of the list  ");
    scanf("%d",&n);
    printf("\n\nEnter %d elements ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\nThe list is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int k;
    printf("\nEnter the position of data which you want to delete: ");
    scanf("%d",&k);
    while(k<n)
    {
        arr[k-1]=arr[k];
        k++;
    }
    n-=1;
    printf("\nAfter deletion  \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}
