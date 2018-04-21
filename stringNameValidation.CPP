#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Name
{
	private: char name[100];

	public: void validName();
};
void Name::validName()
{
	int cname=0;
	cout<<"\nEnter any message that contains only aplhabets : ";
	gets(name);
	for(int i=0;i<100;i++)
	{
		if(name[i]!='\0')
		{
			if(((name[i]>='a'&&name[i]<='z')||(name[i]>='A'&&name[i]<='Z'))||(name[i]==' '))
			continue;
			else
			cname++;
		}
		else
		break;
	}
	if(cname!=0)
	{
		cout<<"\nErrorCode:"<<cname<<endl;
		cout<<"\nError: Invalid!! (entered message includes characters other than alphabets)"<<endl;
	}
	else
	cout<<"\nSuccess!! (entered message contains only alphabets)";
}
void main()
{
	clrscr();
	Name obj;
	obj.validName();
	cout<<"\n\n\n\n\na program by kumar anurag...";
	getch();
}