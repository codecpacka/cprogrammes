
////////this porgramme isfor binary search
#include<stdio.h>
#define pf printf
#define sf scanf

void binarysearch(int arr[],int l,int r,int x,int n)
{
    int mid;
    mid=(l+r)/2;
   
     if  (arr[mid]==x)
        {
            pf("element found at %d",mid);
            return;
        }
   
    else if(arr[mid]>x)
            {
                r=mid-1;
            binarysearch(arr,l,r,x,n);
            return ;
            }
    else if  (arr[mid]<x)
          { 
               l=mid+1;
            binarysearch(arr,l,r,x,n);
                return;
            }  
   pf("not found");
   
    
return;

    
 

}



int main()
{
    int arr[10],n,x,i,l,r;
    pf("eter how many number:\t");
    sf("%d",&n);
    for(i=0;i<n;i++)
        {
            sf("%d",&arr[i]);

        }


pf("enter the element u wish to search \t");
sf("%d",&x);
l=0;
r=n;
binarysearch(arr,l,r,x,n);
return 0;
}