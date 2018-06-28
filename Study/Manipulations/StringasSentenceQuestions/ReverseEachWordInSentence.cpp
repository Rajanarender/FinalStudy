#include<iostream>
using namespace std;
#include<string.h>

void reverse(char *start,char *end)
{
	while(start < end) //V.V.Imp step
	{
		char temp = *start;
		*start = *end;
		*end = temp;
                 start++; //for traversing,Imp step
                 end--; //For traversing.Imp step
	}
}

#if 0 //For reversing each individual word in the sentence
void func(char *x)
{
	char *w =x;
	char *y=x;
	while(*y)
	{
		if(*y == ' ')
		{
			reverse(w,y-1);
			w=y+1; //Update the word ptr by changing its address
		}
		y++;
	}
	//if(*y == '\0') //Condition is not necessary,since *y is NULL obviously after while loop 
	//{
		reverse(w,y-1); //O/p: labolG egdE si a CNM
	//}

}
#endif

#if 0 //For reversing complete sentence
void func(char *x) 
{
	char *w =x;
	char *y=x;
	while(*y)
	{
		if(*y == ' ')
		{
			reverse(w,y-1);
			w=y+1; //Update the word ptr by changing its address
		}
		y++;
	}
	//if(*y == '\0') //Condition is not necessary,since *y is NULL obviously after while loop 
	//{
		reverse(w,y-1); //O/p: labolG egdE si a CNM
		reverse(x,y-1); //O/p: MNC a is Edge Global
	//}

}

int main()
{
	char x[]="Global Edge is a MNC";
	func(x);
	cout<<x<<endl;
}
#endif 

/******************************************
Reverse Each Word in Sentence Using 2d Array
******************************************/

int main()
{
	const char *x="Global Edge is a MNC\nGlobal Edge is located in Tech Park\tTech Park is Good";
	char y[20][10]; //2d array with rows = Number of words[space+1]
	int j = 0; //rows
	int k = 0; //columns

	while (*x)
	{
		if(*x ==' ' || *x == '.' || *x == '\n' || *x == '\t')
		{
			y[j][k]='\0'; //Completion of Each WORD
			j++; //Increment rows
			k=0; //Reset columns to 0

			x++; //V.V.Imp, Whenever these characters come,Move the 'x' position to next position
		}

		if(*x != '\0')
		{    
			y[j][k]= *x; //Filling the 2d array
			k++; //increment columns
		}
		x++;
	}
	y[j][k]='\0'; //Completion of Last WORD

#if 0 //Method 1,Using strrev() API
	for(int a=0;a<=j;a++) //condition check with rows only
	{
		strrev(y[a]); //Reverse each word	
	}
#endif

#if 1 //Method 2,Using columnwise reverse of each Word
	int len=0;
	int temp=0;
	for(int a=0;a<=j;a++) //condition check with rows only
	{
		len=strlen(y[a]);
		for(int b=0;b<len/2;b++) //Each column of Word
		{
			temp = y[a][b];
			y[a][b] =y[a][len-1-b];
			y[a][len-1-b]=temp;
		}
	}
#endif

	for(int a=0;a<=j;a++)
	{
		cout<<y[a]<<endl;
	}
}






