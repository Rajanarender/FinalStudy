#include<iostream>
using namespace std;

/*****************************************************
Operator Overloading:
Binary Operator:Strings[strcat]
Unary/Binary Operator:Numbers
Binary Operator:Complex Numbers[a+bj]
Unary Operator:Pre/Post(int dummy) increment
istream(<<),ostream(>>) operator overloading
new,delete operators overloading

NOTE:We cannot overload this operators
.
::
?:
sizeof()
typeid().name() //RTTI[Real Time Type Information]
********************************************************/

class Complex
{
	int a,b;

	public:
	Complex()
	{
		a=0;
		b=0;
	}

	Complex(int x,int y)
	{
		a=x;
		b=y;
	}

	Complex& operator+(const Complex &obj) //member function,only one argument
	{
		if(this != &obj)
		{
		       	//this->a=this->a+obj.a; //Should not use here
			//this->b=this->b+obj.b; //Should not use here
			//a=a+obj.a;
			//b=b+obj.b;
                        //Correct method
			Complex *temp;
			temp->a=this->a+obj.a;
			temp->b=this->b+obj.b;
                        return *temp;
		}
		//return *this;
	}
/* 
      friend Complex &operator+(const Complex &obj1,const Complex &obj2)//friend function,so 2 arguments
	{
		//if(this != &obj) //Should not use this ptr, since it is a non-member of friend function
		//{
                 Complex *temp; //Should use temp object mandatorily
                 temp->a=obj1.a+obj2.a;
                 temp->b=obj1.b+obj2.b;
                 return *temp;//Should use within the block, or else scope Error arises
		//}
                 //return *temp; //Should not use here
		//return *this;
	}
*/
	void display()
	{
		cout<<a<<"+"<<b<<"j"<<endl;
	}
};

int main()
{
	Complex c1(5,4),c2(2,6),c3;
	c3=c1+c2;
        c3.display();
        c1.display();
        c2.display();
}


