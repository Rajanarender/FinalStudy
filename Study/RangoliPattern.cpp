#include<iostream>
using namespace std;

/*********************************************
Triangle pattern with 
=>Natural no. of stars[with space,without space(90degrees right side),without space(90degrees left side)]
=>Even no. of stars
=>Odd no. of stars
*********************************************/

int main()
{

#if 0 //Triangle without spaces,Even No. of stars
	int noofRows=5;
	for(int row=1;row<=noofRows;row++)
	{
		for(int colspace=1;colspace<=noofRows-row;colspace++) //empty spaces
		{
			cout<<" ";
		}
		for(int colstar=1;colstar<=(2*row);colstar++) //Even stars,2n
		{
			cout<<"*"; //"* "[*withoutspace] is V.V.Imp
		}
		cout<<endl; //V.V.Imp,Each row starts in a new line
	}
#endif

#if 0 //Triangle without spaces,Odd No. of stars
	int noofRows=5;
	for(int row=1;row<=noofRows;row++)
	{
		for(int colspace=1;colspace<=noofRows-row;colspace++) //empty spaces
		{
			cout<<" ";
		}
		for(int colstar=1;colstar<=(2*row)-1;colstar++) //Odd stars,2n-1
		{
			cout<<"*"; //"* "[*withoutspace] is V.V.Imp
		}
		cout<<endl; //V.V.Imp,Each row starts in a new line
	}
#endif

#if 1 //Triangle with spaces,Natural No. of stars
	int noofRows=5;
	for(int row=1;row<=noofRows;row++)
	{
		for(int colspace=1;colspace<=noofRows-row;colspace++) //empty spaces
		{
			cout<<" ";
		}
		for(int colstar=1;colstar<=row;colstar++) //stars
		{
			cout<<"* "; //"* "[*withspace] is V.V.Imp
		}
		cout<<endl; //V.V.Imp,Each row starts in a new line
	}
#endif

#if 0 //Right angle Triangle without spaces, 90degrees towards Right side
	int noofRows=5;
	for(int row=1;row<=noofRows;row++)
	{
		for(int colspace=1;colspace<=noofRows-row;colspace++) //empty spaces
		{
			cout<<" ";
		}
		for(int colstar=1;colstar<=row;colstar++) //stars
		{
			cout<<"*"; //"* "[*withoutspace] is very important
		}
		cout<<endl; //V.V.Imp,Each row starts in a new line
	}
#endif

#if 0 //Right angle Triangle without spaces, 90degrees towards Left side
	int noofRows=5;
	for(int row=1;row<=noofRows;row++)
	{
#if 0 //Disable this always
		for(int colspace=1;colspace<=noofRows-row;colspace++) //empty spaces
		{
			cout<<" ";
		}
#endif
		for(int colstar=1;colstar<=row;colstar++) //stars
		{
			cout<<"*"; //"* "[*withoutspace] is very important
		}
		cout<<endl; //V.V.Imp,Each row starts in a new line
	}
#endif
}
