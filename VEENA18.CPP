#include<iostream>
#include<string>
using namespace std;

class Publication
{
private:
    string title;
    float price;
public:
    void getData()
    {
        cout<<"Enter Title:"; 
		cin>>title;
        cout<<"Enter Price: $"; 
		cin>>price;
    }

    void putData()
    { 
	cout<<"\nTitle:"<<title<<"nPrice:"<<price;    
	}
};



class Book : public Publication
{
private:
    int pages;
public:
    void getData()
    {
	 Publication::getData();
	  cout<<"enter Pages:";
	   cin>>pages; 
	   }

    void putData()
    { 
	Publication::putData(); 
	cout<<"Pages:"<<pages; }
};



class Tape : public Publication
{
private:
    float minutes;
public:
    void getData()
    { 
	Publication::getData();
	 cout<<"enter Minutes:"; 
	 cin>>minutes; }

    void putData()
    {
	 Publication::putData(); 
	 cout<<"Minutes:"<<minutes; 
	 }
};

int main()
{
    Book b;
	Tape t;
    b.getData();
    t.getData();

    cout<<"\a"<<endl;
    b.putData();
    cout<<endl;
    t.putData();
    cout<<endl;

    return 0;
}
