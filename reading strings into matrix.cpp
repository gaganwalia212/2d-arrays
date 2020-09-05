#include<iostream>
#include<ios>
#include<limits>

using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
char a[50][100];
int n;
cin>>n;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
for(int i=0;i<n;i++){
cin.getline(a[i],50);

};
for(int i=0;i<n;i++)
	cout<<a[i]<<endl;

}
