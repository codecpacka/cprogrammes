#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf
void selectionsort(int a[],int n)
    {      
        int i,j,temp,k; 
           for(i=0;i<n;i++) 
            {
                for(j=i+1;j<n;j++)
                {
                    if(a[i]>a[j])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;

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

selectionsort(arr,n);

return 0;
}