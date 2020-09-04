#include<iostream>
using namespace std;
int main() {
	int m,n,k,s;
	char a[100][100];
	cin>>m>>n>>k>>s;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		cin>>a[i][j];
	}
	int i=0,j=0;
	while(s>=k&&j<m)
	{
		for(i=0;i<n;i++)
		{
			if(i!=0)s--;
			if(a[j][i]=='.')
			s-=2;
			else if(a[j][i]=='*')
			s+=5;
			else break;
		}
		j++;	
	}
	if(s<k)
	cout<<"No\n";
	else 
	{
		cout<<"yes\n";
		cout<<s<<endl;
	}

	return 0;
}
