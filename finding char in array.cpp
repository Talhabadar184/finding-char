#include <iostream>
using namespace std;
int main()
{              int i;
	char arr1[10]={},entered_character;
	cout<<"enter the list of character: "<<endl;
	for(i=0;i<10;i++)
	{
		cin>>arr1[i];
	}
	cout<<"enter the character you wanna find: "<<endl;
	cin>>entered_character;
	for(i=0;i<10;i++)
	{
		if(arr1[i]=entered_character);
   }  
		cout<<entered_character<<" "<<"has been found: ";
	return 0;
}
