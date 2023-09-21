#include<stdio.h>
#include<conio.h>
int=-1;
int=a[5];
void push();
void display();
void pop();

void main ()
{
 int ch=0;
 do
 {
  printf("/n 0 for exit ");
  printf("/n 1 for push");
  printf("/n 2 for pop");
  printf("/n 3 for display");

  printf("/n enter your choice");
  scanf("%d",&ch);

  switch(ch)
  {
   case 0:
   exit();

   case 1:
   push();
   break;

   case 2:
   pop();
   break;

   case 3:
   display();
   break;
   }
  }while(ch!=0);
}

void push()
{
 if (top==4)
 {
  printf("/n stack is full");
 }
 else
 {
  top++;
 }
 printf("/n enter element  ");
 scanf("%d",&a[top]);
 }
}
void display()
{
 int i;
 if (top==-1)
  {
   printf ("/n stack is empty");
  }
 else
 {
  for (i=4;i>-1;i--)
  {
   printf("/n %d",a[i]);
  }
 }
 getch();
}

void pop()
{
 if (top==-1)
 {
  printf("/n stack is empty");
 }
 else
 {
  top--;
 }
}

