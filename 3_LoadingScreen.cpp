#include<iostream.h>
#include<conio.h>
#include<dos.h>
void loading()
{
	cout<<"\n\t\t\t\tLOADING SCREEN\n\n\n\n";
	for(int i=0;i<80;i++)
	{
		cout<<"Û"; //alt+219
		delay(60);
	}
	cout<<"press any key to continue";
}
void main()
{
	clrscr();
	loading();
	cout<<"\n\n\n\n\n\na program by kumar anurag....";
	getch();
}