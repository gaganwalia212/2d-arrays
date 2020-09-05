#include<iostream>
#include<algorithm>
using namespace std;

//image is a matrix ..2d or 3d
//to rotate 90 degree clockwise...first take transpose and then reverse each row
//to rotate 90 degree anti-clockwise..first reverse each row and then take transpose
//pregram to roate an image 90 degree anti-clockwise
int main() {
	int a[1000][1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cin>>a[i][j];
	}

	//reverse each row
	for(int i=0;i<n;i++)
	{
		//a[i]is a row pointer
		reverse(a[i],a[i]+n);
	}

	//take transpose
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<j)
			swap(a[i][j],a[j][i]);
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
