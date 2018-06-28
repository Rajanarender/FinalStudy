#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Interface
class Iobserver   // base class
{
public:
    //pure virtual class bec i m creating INTERFACE (hence forcing derived class to implement the function)
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
    //@override
    void notify()
    {
        cout<<"Notified to Security"<<endl; // implementation of derived class Security
    }
};


class Subject
{
public:
      vector<Iobserver*> v;
    //function to subscribe or register to Subject
    void register_(Iobserver *newobserver)
    {
        v.push_back(newobserver);
    }

    void Unregister_(Iobserver *observer)
    {
	    //v.erase(v.find(bptr)
	    auto it =find(v.begin(),v.end(),observer);
	    if(it != v.end())
	    {
		    v.erase(it);
		    delete observer; //V.V.Imp step
	    }
    }
    // notifying to all subscribers who has registered(subscribed) to Subject
    void notifyAll()
    {
        for( auto elem : v)
            elem->notify();
    }

    //Its other functionalities  (Note: At the end of every body function call notifyAll function )
    void HireEmployee(string name)
    {
        cout<<"New Employee added: "<<name<<endl;
        notifyAll();
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

        bptr->register_(hr);
        bptr->register_(f);
        bptr->register_(s);

//unregistering the observers
        //bptr->Unregister_(s);

    // STEP2:  Call its other functions
       // bptr->HireEmployee("Praveen"); cout<<endl;
        bptr->modifyEName("Praveen","Nanu");

    return 0;
}
