#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int A[3][3],B[3][3],product[3][3];
	cout<<"Enter elements of first 3*3 matrix(A):\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cout<<"A["<<i<<"]["<<j<<"]=";	
		cin>>A[i][j];
		cout<<"\nEnter elements of second (3*3) matrix(B):\n";
		for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
		
		cout<<"B["<<i<<"]["<<j<<"]=";
		cin>>B[i][j];
	}
}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				product[i][j]=0;
				for(int k=0;k<3;k++)
				product[i][j]+=A[i][k]*B[i][j];
			}
		}
		cout<<"\n Product of the two matrices:\n";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
		
			cout<<product[i][j]<<"\t";
			cout<<"\n";
		}
		return 0;
	}
}


