#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf

struct stackStr{
int cap;   /////max numbers of element of stack
int top;
int *arr;

};

struct stackStr *creStack(struct stackStr *stack,int n)
{
    stack->cap=n;
    stack->arr=(int *)malloc(sizeof(n*2));
    return stack;
}

int isEmpty(stackStr *stack)
{
if(stack->top==-1)
    return 1;

return 0;


}


int isFull(stackStr *stack)
{
if(stack->top==(stack->cap-1))
    return 1;

return 0;


}



void insStack(stackStr *stack,int x)
{
if(!isFull(stack))
    {
        stack->top++;
        stack->arr[stack->top]=x;

    }
else
printf("\n stack is full \n ");
}

void display(stackStr *stack)
    {
        if(!isEmpty(stack))
        {
            int i;
            for(i=0;i<=stack->top;i++)
            {
                pf("%d \t ",stack->arr[i]);


            }


        }

    else
    pf("\n empty stack");

    }



void delStruct(stackStr *stack)
{
    if(!isEmpty(stack))
    {
        stack->top--;

    }




}






int main()
{
int n,ch,x;

struct stackStr *stack;
stack=(struct  stackStr *)malloc(sizeof(struct stackStr));
pf("enter how many elements u wish to use \t");
sf("%d",&n);
stack=creStack(stack,n);
stack->top=-1;
do  {
    display(stack);
    pf("\n 1.insert\t ");
    pf("2.delete\t");
    // pf("3.display\t ");
    pf("\n enter choice \t ");
    sf("%d",&ch);
     switch (ch)
    {
          
    case 1:pf("x=");
          sf("%d",&x);
          insStack(stack,x);
        break;
    
    case 2:delStruct(stack);
            break;
    
    default:pf("wrong choice ");
        break;
    }


    }while(ch!=0);



return 0;
}