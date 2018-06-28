#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	const char *x="Global Edge is a MNC Global Edge is located in Tech Park Tech Park is Good is Global";
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

	int count=1; //Make count as 1
	int fc =1; //Need to check,TBD
	for(int a =0;a<=j;a++) //condition check with rows only
	{
		for(int b=0;b<a;b++) //V.V.Imp step, b should always start from Zero
		{
			if((strcmp(y[a],y[b])==0) )
			{
				goto label; //V.V.Imp step
			}
		} 
		for(int b=a+1;b<=j;b++) //V.V.Imp step, b should always start from Zero
		{
			if( strcmp(y[a],y[b])==0 )
			{
				fc++;
			} 
		}
		if(fc == 1)
		{
			cout<<y[a]<<"="<<count<<endl;
		}
		else
		{
			cout<<y[a]<<"="<<fc<<endl;
			fc= 1;
		}
label:;  //V.V.Imp,since there are no statements after label,terminate(;) it 
	}
}
