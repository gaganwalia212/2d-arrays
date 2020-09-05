#include<iostream>
using namespace std;

//staircase search
int main()
{

int m,n;
cin>>m>>n;
int a[100][100];
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
		cin>>a[i][j];
}
int key ;
cin>>key;
//chose either of the corner element(0,n-1 or m-1,0)..also take care of the direction of travel
int i{0},j{n-1};
while(i<m&&j<n&&&i>=0&&j>=0)
{
	if(key==a[i][j])
	{
		cout<<"element found at "<<i<<" , "<<j<<endl;
		break;
	}
	else if(key>a[i][j])
		i++;
	else j--;
}
if(i>=m||j>=n||i<0||j<0)
	cout<<"Element not found\n";
}
