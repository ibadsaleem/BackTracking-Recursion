#include <iostream>
#define N 4
using namespace std;
 class Paths{
 	public:
	 Paths(){}
 	
	int CountPaths(int m,int n)
	{
		if (m==3 && n==3)
		{
			return 1;
		}
		if (m>N || n>N)
		{
			return 0;
		}
		int rec1=CountPaths(m,n+1);
		int rec2=CountPaths(m+1,n);
		return rec1+rec2;
	}
 };
 
 int main()
 {
 
 	Paths P;
	cout<<P.CountPaths(0,0);
	
	//display
//	for (int i=0;i<N;i++)
//	{
// 		for (int i=0;i<N;i++){
// 			cout<<arr[i][j]<<" ";
//		 }
//		 cout<<endl;	
//	}
//	
 }
