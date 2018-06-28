#include <iostream>
#include <vector>
#include <algorithm> //for find(),since vector does not have find() member
using namespace std;

//Interface
class Iobserver   // base class
{
public:
    virtual void notify()=0;
};

class Hr_dept : public Iobserver
{
public:
    void notify()
    {
        cout<<"Notified to Hr_dept"<<endl;  // implementation of derived class Hr_dept
    }
};

class Finance : public Iobserver
{
public:
    void notify()
    {
        cout<<"Notified to Finance"<<endl; // implementation of derived class Finance
    }
};

class Security : public Iobserver
{
public:
    void notify()
    {
        cout<<"Notified to Security"<<endl; // implementation of derived class Security
    }
};


class Subject
{
	public:
		vector<Iobserver*> v;
		vector<Iobserver*> ::iterator it;

		//function to subscribe or register to Subject
		void register(Iobserver *newobserver)
		{
			v.push_back(newobserver);
		}

		void Unregister(Iobserver *observer) //Erasing/Deleting that observer
		{
			it =find(v.begin(),v.end(),observer);
			if(it != v.end()) //Observe present already
				v.erase(it);
		}
		// notifying to all subscribers who has registered(subscribed) to Subject
		void notifyAll()
		{
#if 1 //C++11
			for( auto elem : v) //C++11
				elem->notify();
#endif
#if 0
			for(int i =0;i<v.size();i++)
				v[i]->notify();
			for(it =v.begin();it !=v.end();it++) //begin(),end() are functions
				it->notify();
#endif
		}

		void modifyEName(string oldname, string newname)
		{
			cout<<"Emp name is changed from "<<oldname<<" to "<<newname<<endl;
			notifyAll();
		}
};
int main()
{
	// STEP1 : Initialization
	Hr_dept *hr = new Hr_dept();
	Finance *f = new Finance();
	Security *s = new Security();

	//registering or subscribing to Subject
	Subject *bptr;
	bptr = new Subject();

	bptr->register(hr);
	bptr->register(f);
	bptr->register(s);

	//unregistering the observers
	//bptr->Unregister(s);

	bptr->modifyEName("Praveen","Nanu");
	return 0;
}

