#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	const char *x="Global Edge Mindtree\nAccenture NTTData\tMphasis Sonata";
	char y[20][10]; //2d array with rows = Number of words[space+1]
	int j = 0; //rows
	int k = 0; //columns

	while (*x)
	{
		if(*x == ' ' || *x == '.' || *x == '\n' || *x == '\t')
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

	const char *n="Global Edge is a MNC";
	char z[20][10]; //2d array with rows = Number of words[space+1]
	int c = 0; //rows
	int d = 0; //columns

	while (*n)
	{
		if(*n == ' ' || *n == '.' || *n == '\n' || *n == '\t')
		{
			z[c][d]='\0'; //Completion of Each WORD
			c++; //Increment rows
			d=0; //Reset columns to 0

			n++; //V.V.Imp, Whenever these characters come,Move the 'x' position to next position
		}

		if(*n != '\0')
		{    
			z[c][d]= *n; //Filling the 2d array
			d++; //increment columns
		}
		n++;
	}
	z[c][d]='\0'; //Completion of Last WORD

	int flag = 1;
	for(int a=0;a<=j;a++) //condition check with rows only
	{
		for(int b=0;b<=c;b++)
		{
			if( strcmp(y[a],z[b]) == 0 )
			{
				// cout<<y[a]<<"=>"<<endl;
				flag =0;
				break; //V.V.Imp step
			}
			else
			{
				flag =1;
			}
		}
#if 1 //For unique Words in 1st sentence
		if(flag ==1) 
		{
			cout<<y[a]<<endl;
		}
#endif

#if 0 //For same Words in both 1st sentence and 2nd sentence          
		if(flag ==0) 
		{
			cout<<y[a]<<endl;
		}
#endif
	}

}


