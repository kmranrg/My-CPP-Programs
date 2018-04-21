#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int evenoddstr()
{
 int i=0;
 char c;
 cout<<"\nEnter the String : ";
 while((c=getchar())!='\n')
 {
  i++;
  /* This will print on screen as sooon as enter is pressed */
  putchar(c);
 }
 if(i%2==0)
 return 0;
 else
 return 1;
}
int main()
{
 clrscr();
 int ch;
 cout<<"//PROGRAM TO CHECK EVEN-ODD STRINGS :-"<<endl;
 ch=evenoddstr();
 if(ch==0)
 cout<<"\nGiven String is Even";
 else if(ch==1)
 cout<<"\nGiven String is Odd";
 cout<<"\n\nThank you...           a program by kumar anurag";
 return 0;
}
