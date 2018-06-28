#include<iostream>
using namespace std;
#include<list>

TBD
int main()
{
	list<int>v{2,4,6,8,9,4,5,7}; //C++11
	for(list<int>::iterator it=v.begin();it !=v.end();it++)
	{
		if(*it == 1) //4th index element
		{
			//v.insert(it,100); //it ,we should pass only address/ref as parameter
                         it=v.erase(it);
		}
		cout<<*it<<endl;
	}

}
