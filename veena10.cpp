#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("OUT.TXT");
	char ch;
	int count=0;
	while(!fin.eof())
	{
		fin.get(ch);
		if(ch==' ')
		count++;
		
	}
	cout<<"number of blank space in file area"<<count;
	
	fin.close();
	return 0;
}
