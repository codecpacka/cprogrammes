#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf
void bubblesort(int a[],int n)
    {      
        int i,j,temp,k; 
           for(i=1;i<n;i++) 
            {
                for(j=0;j<n-i;j++)
                {
                    if(a[j]>a[j+1])
                        {
                              temp=a[j];
                              a[j]=a[j+1];
                              a[j+1]=temp;  

                        }
                }


            }
      for(k=0;k<n;k++)
        {
            pf("%d",a[k]);

        }
    
    
    }

int main()
{
    int arr[10],i,n,x;
    pf("eter how many number:\t");
    sf("%d",&n);
    for(i=0;i<n;i++)
        {
            sf("%d",&arr[i]);

        }

bubblesort(arr,n);

return 0;
}