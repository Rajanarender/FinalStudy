#include<stdio.h>
#include<stdlib.h>

int main()
{
	int mat[2][2][2]={{1,2,3},{4,5,6}};//3D 
	int height=2,rows=2,columns=2; //We can use macros instead

	int ***x=(int***)malloc(sizeof(int**)*height);
	//x[i][j]=(int*)calloc(columns,sizeof(int));
	for(int i=0;i<height;i++)
	{
		x[i] = (int**)malloc(sizeof(int*)*rows);
		//x[i] = (int**)calloc(rows,sizeof(int*));

		for(int j=0;j<rows;j++)
		{
			x[i][j]=(int*)malloc(sizeof(int)*columns);
			//x[i][j]=(int*)calloc(columns,sizeof(int));
		}
	}
}

