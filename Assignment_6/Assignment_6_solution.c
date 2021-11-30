#include<stdio.h>
//program for linear search  
int main()
{
    int a[20],i,x,n,z;
    //for number of elements in array
    printf("enter the number of elements ");
    scanf("%d",&n);
    //taking the input of array elements
    printf("Enter array elements:");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched:");
    scanf("%d",&x);
    //linear search
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
    if(i<n)
    {
        //index will be i+1 because index number in array starts from 0
    z=i+1;
        printf("Element found at index %d",z);
    }
    else
        printf("Element not found");
    return 0;
}
