#include <iostream>
using namespace std;
#define N 4
class Maze{
	int Sol[N][N]={{0}};
	public:
		Maze(){}
		int isSafe(int arr[][N],int r , int c)
		{
			if (r<0 || c<0 || r>=N || c>=N)
			{
				return 0;
			}
			if (arr[r][c]==0)
			{
				return 0;
			}
			return 1;
		}
		
		int Solve_Maze(int arr[][N] , int r ,int c)
		{
			if (r>=N-1 && c>= N-1)
			{
				Sol[r][c]=1;
				return 1;
			}
			if (isSafe(arr, r ,c)==1)
			{
				Sol[r][c]=1;
				if (Solve_Maze(arr,r+1,c)==1)
				{
					return 1;
				}
				if (Solve_Maze(arr,r,c+1)==1)
				{
					return 1;
				}
				Sol[r][c]=0;
				return 0;
			}
			return 0;
		}
		
		void Display()
		{
			for (int i=0;i<N;i++)
			{
				for (int j=0;j<N;j++)
				{
					cout<<Sol[i][j]<<" ";
				}
				cout<<endl;
			}
		}
};


int main()
{
	int arr[N][N]={{1, 0, 0, 0},
{1, 1, 0, 1},
{0, 1, 0, 0},
{1, 1, 1, 1}};
	Maze M;
	M.Solve_Maze(arr,0,0);
	M.Display();
}
