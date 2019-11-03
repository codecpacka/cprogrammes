#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf
int  min(int a[],int index,int n)
    {      int j ,minval,loc;
        minval=a[index];
        loc=index;
       for(j=index+1;j<n;j++)
            {
        
                if(minval>a[j])
                    {
                        minval=a[j];
                        loc=j;
                    }
                
               

            };
    return(loc);
    
    }

int main()
{
    int a[10],i,n,temp,loc;
    pf("eter how many number:\t");
    sf("%d",&n);
    for(i=0;i<n;i++)
        {
            sf("%d",&a[i]);

        }
for(i=0;i<n;i++)
{
    loc=min(a,i,n);
    temp=a[i];
    a[i]=a[loc];
    a[loc]=temp;

}
for(i=0;i<n;i++)
        {
            pf("%d",a[i]);

        }

return 0;
}