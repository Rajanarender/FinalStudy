#include<iostream>
using namespace std;
#include<stdlib.h> //for exit function

/************************************************
void exit(int status);

exit();//Does not reveal what type of termination it is?
exit(0);It means successful termination
exit(1); It means abnormal termination
************************************************/

void func()
{
	int x=0;
	while(x<5)
	{
		cout<<x<<endl;
		x++;
		if(x==4)
			exit(0);
	}
}

int main()
{
	func();
	cout<<"In main()"<<endl;
}
