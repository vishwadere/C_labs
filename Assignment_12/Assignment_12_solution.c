#include <stdio.h>  
void  main()  
{  
    int n,b;
    int a[1000]; 
    int i,max,min; 
    int x;
    int sum=0;
    //input for size of array
    printf("enter the size of array :\n");  
    scanf("%d",&n);
    //elements in an array
    printf("Enter %d elements in the array : ", n);
   for(i=0;i<n;i++)
    {
        scanf("%d", & a[i]);
    }
     printf("enter 1 for displaying all elements");
       printf("\nenter 2 for displaying sum");
        printf("\nenter 3 for searching");
         printf("\nenter 4 for displaying max");
          printf("\nenter 5 for displaying min");
          scanf("%d", &b);
    switch (b){
        case 1:
        {
    //dsiplaying elements
    printf("\nElements in array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ", a[i]);
    }
        }
        break;
        case 2:
        {
    //sum of array
    for(i=0;i<n;i++)
    {
    sum=sum+a[i];
    }
    printf("\nsum is %d ", sum);
        }
         break;
        case 3:
        {
   //searching a number
    printf("enter the element to be searched in the array :\n");  
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
       if (a[i] == x)
       {
            printf("element found at index %d ",i);
       }
         
    }
        }
         break;
        case 4:
        {
    //maximum
   for (int i = 1; i < n; ++i)
   {
    if (a[0] < a[i])
    {
      a[0] = a[i];
    }
  }
  printf("\nLargest element = %d", a[0]);
        }
         break;
        case 5:
        {
  //minimum
  for(int i = 0; i < n; i++)
  {
  if(a[i]<a[0])
  {
      a[0] = a[i];
  }
  
  }
  printf("\nsmallest element = %d", a[0]);
  } break;
    }
    
    // default:
     // printf("Default ");
}



