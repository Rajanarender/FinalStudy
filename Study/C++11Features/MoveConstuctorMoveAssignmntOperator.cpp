#include<iostream>
using namespace std;
#include<vector>

/*************************************************
move constructor:

syntax:
X(X &&obj)
{

}
NOTE: Do not use new operator inside move constructor

move Assignment operator:
syntax:
X& operator=(X &&obj)
{

return *this;
}
*************************************************/
class X
{
	int *p;

	public:
	X()
	{
                cout<<"Default constructor\n";
		p=new int;
	}

	X(const X &obj)
	{
                cout<<"Copy constructor\n";
		p= new int;
		p = obj.p;
	}

	X(X &&obj) //move constructor 
	{
                cout<<"Move Constructor\n";
		p= obj.p; //No need of memory allocation, we can directly copy the content
                obj.p = nullptr;
	}

     
       X& operator= (X &&obj)
       {
                cout<<"Move Assignment operator\n";
		p= obj.p; //No need of memory allocation, we can directly copy the content
                obj.p = nullptr;
                return *this;
       }

};

int main()
{
	vector<X>v;
	v.push_back(X()); //This calls the move constructor
        X obj1;
        obj1 = X(); //This calls the move assignment operator
}
