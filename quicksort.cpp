#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf
void quicksort(int a[],int lb,int ub)
    {      
     if(lb<ub)
     {
     int key,temp,i,j;
     key=lb;
     i=lb;
     j=ub+1;
       while(i<j)
       {
           while(a[i]<=a[key])
                i++;
            
        
        while(a[j]>a[key])
            j--;
        
        if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;


            }


       }
      
     temp=a[key];
     a[key]=a[j];
     a[j]=temp;
        for(i=lb;i<=ub;i++)
        {
            pf("%d \t",a[i]);

        }
     pf("\n");
     quicksort(a,lb,j-1);
     quicksort(a,j+1,ub);
    }
    
    
 
    
    
    }

int main()
{
    int arr[10],i,n,lb,ub;
    pf("eter how many number:\t");
    sf("%d",&n);
    for(i=0;i<n;i++)
        {
            sf("%d",&arr[i]);

        }
   
  for(i=0;i<n;i++)
        {
            pf("%d \t",arr[i]);

        }
    pf("\n");

quicksort(arr,0,n-1);
   for(i=0;i<n;i++)
        {
            pf("%d \t",arr[i]);

        }
return 0;
}