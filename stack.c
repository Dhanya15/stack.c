#include<stdio.h>
#define MAX 5
int top=-1,stack[MAX];

void push()
{
int x;
if(top==MAX-1)
{
printf("Stack overflow\n");
}
else 
{
int x;
top++;
printf("Enter an element\n");
scanf("%d",&x);
stack[top]=x;
}
}

void pop()
{
if(top==-1)
{
printf("Stack underflow\n");
}
else
{
top--;
}
}

void peek()
{
  if(top==-1)
{
printf("Stack underflow\n");
}
else
{
 printf("Top most element is %d\n",stack[top]);
}
}
void display()
{
int i;

   if(top==-1)
{
printf("Stack underflow\n");
}

else
{
for (i=top;i>=0;i--)
printf("Elements in stack are %d\n",stack[i]);
}
}

int main()
{
int n;

while(n)
{
printf("enter ur choice\n");
scanf("%d",&n);
switch(n)
{
case 1:push();
break;
case 2:pop();
break;
case 3:peek();
break;
case 4:display();
break;
default:
printf("entered wrong choice\n");
}
}

}


  
