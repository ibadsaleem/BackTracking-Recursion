#include <iostream>
using namespace std;

class Subset{
	public:
		Subset(){}
		int SubsetSum(int arr[],int n,int sum){
			if (sum==0)
			{
				return 1;
			}
			else if (n<0 || sum<0)
			{
				return 0;
			}
			
			bool rec1=SubsetSum(arr,n-1,sum-arr[n]);
			bool rec2=SubsetSum(arr,n-1,sum);
			return rec1||rec2;
			
		}
};

int main()
{
	int arr[3]={2,1,4};
	Subset S;
	int sumfind=3;
	int a=S.SubsetSum(arr,2,sumfind);
	if (a==1)
	{
		cout<<"FOUND";
	}
	else{
		cout<<"NOT FOUND";
	}
}
