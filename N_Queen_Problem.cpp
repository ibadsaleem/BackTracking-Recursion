#include <iostream>
#define N 4
using namespace std;

class Queen{
	public:
		
		Queen(){}
		int isSafe(int arr[][N],int r,int c){
			int x=r;
			int y=c;
			//upper left diagonal check
			while (x>=0 && y>=0)
			{
				if (arr[x][y]==1)
				{
					return 0;
				}
				x--;
				y--;
			}
			//lower left diagonal check
			x=r;
			y=c;
			while (x<=N && y>=0)
			{
				if (arr[x][y]==1){
					return 0;
				}
				x++;
				y--;
			}
			x=r;
			y=c;
			//horizontal check
			while(y>=0)
			{
				if (arr[x][y]==1)
				  {
				  return 0;}
				y--;
			}
			return 1;
		}
		
		int SolveQueen(int arr[][N],int c)
		{
			if (c>=N)
			{
				return 1;
			}
			for (int i=0;i<N;i++)
			{
				if (isSafe(arr,i,c))
				{
					arr[i][c]=1;
					if (SolveQueen(arr,c+1))
					{
						return 1;
					}
				}
				arr[i][c]=0;
			}
			return 0;
		}
};


int main()
{
	Queen Q;
	int arr[N][N];
	for (int i=0;i<N;i++)
	{
		for (int j=0;j<N;j++)
		{
			arr[i][j]=0;
		}
	}
	
	
	Q.SolveQueen(arr,0);
	for (int i=0;i<N;i++)
	{
		for (int j=0;j<N;j++)
		{
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	
}
