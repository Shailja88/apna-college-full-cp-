//Question 1: Write a c program for implement of binary search. 
#include<stdio.h>
int main()
{
int start, arr[50],key,end,mid,n,i,found;
found=0;
printf("Enter the number of elements you want to enter :");
scanf("%d",&n);
printf("Enter %d the elements in sorted order: \n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter the element to be found: ");
scanf("%d",&key);
start=0;
end=n-1;
mid=(start+end)/2;
while(start<=end)
{
    if(key<arr[mid])
    {
        end=mid-1;
        mid=(start+end)/2;

    }
    else if(key>arr[mid])
    {
        start=mid+1;
        mid=(start+end)/2;
    }
    else if(key==arr[mid])
    {
        printf("Found the element %d at position %d ",key,mid+1);
        found=1;
        break;
    }

   
}
if(found==0)
{
    printf("Element not found");
}
return 0;
}
