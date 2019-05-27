
#include<iostream>
#include<fstream>
using namespace std;
int a[100][100],n;
int read_data(int b)
{
    int i,j;
    for(i=1;i<=b;i++)
    {
        for(j=1;j<=b;j++)
        {
            cin>>a[i][j];
        }
    }
}

int print_data(int thisone[100][100],int dimension)
{ cout<<endl;
 for(int i=1;i<=dimension;i++)
    {for(int j=1;j<=dimension;j++) cout<<thisone[i][j]<<" ";
     cout<<endl;}
}

int main()
{
 int i,u;
 cin>>n;
 read_data(n);
 print_data(a,n);


 for(i=1;i<=(n-1)/2;i++)
 {
    for(u=i+1;u<=(n-i);u++)
    {
        swap(a[i][u],a[n-i+1][u]);
    }
 }
 for(i=1;i<=(n-1)/2;i++)
 {
        for(u=i+1;u<=(n-i);u++)
        {
            swap(a[u][i],a[u][n-i+1]);
        }
 }

 print_data(a,n);
return 0;}
