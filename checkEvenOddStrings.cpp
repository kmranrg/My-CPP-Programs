#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int main()
{
 clrscr();
 int i=0;
 char c;
 cout<<"//PROGRAM TO CHECK EVEN-ODD STRINGS :-"<<endl;
 cout<<"\nEnter the String : ";
 while((c=getchar())!='\n')
 {
  i++;
  /* This will print on screen as sooon as enter is pressed */
  putchar(c);
 }
 if(i%2==0)
 cout<<"\nGiven String is Even";
 else
 cout<<"\nGiven String is Odd";
 cout<<"\n\nThank you...           a program by kumar anurag";
 getch();
}