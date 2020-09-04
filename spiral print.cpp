#include<iostream>
using namespace std;

void spiral_print(int a[][1000],int m,int n)
{
///spiral print..
//four pointers on 2d array..
int row_start=0;
int column_start=0;
int row_end=m-1;
int column_end=n-1;
while(row_start<=row_end &&column_start<=column_end)
{
    //if statement zaroori hai...agar column_end column_start se piche hai..it means we are done with all columns.(same with rows)
	//print row_start from column_start to column_end..
    if(row_start<=row_end&&column_start<=column_end){
	for(int i=column_start;i<=column_end;i++)
		cout<<a[row_start][i]<<" ";
	//increment row_start
	row_start++;}

	//print column_end from row_start to row_end
    if(row_start<=row_end&&column_start<=column_end){
	for(int i=row_start;i<=row_end;i++)
		cout<<a[i][column_end]<<" ";
	//decrement column_end
	column_end--;}

	//print row_end from column_end to column start
    if(row_start<=row_end&&column_start<=column_end){
	for(int i=column_end;i>=column_start;i--)
		cout<<a[row_end][i]<<" ";
	//decrement row_end
	row_end--;}

	//print col_start from row_end till row_start
    if(row_start<=row_end&&column_start<=column_end){
	for(int i=row_end;i>=row_start;i--)
		cout<<a[i][column_start]<<" ";
	//increment col_start
	column_start++;}
  
}

}
int main()
{

int a[1000][1000];
int m,n;
cin>>m>>n;
int k=1;
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
		a[i][j]=k++;
}

spiral_print(a,m,n);



}
