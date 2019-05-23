#include<fstream>
#include<iostream>
using namespace std;

int A[100][100];
int C[100][100];
int n;

int read_data()
{
fstream f;
f.open("input.dat",ios::in);
f>>n;
for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++) f>>A[i][j];
return 0;}

int print_data(int somematrix[100][100],int dimension)
{
cout<<endl;
for(int i=1;i<=dimension;i++)
 {
  for(int j=1;j<=dimension;j++)   cout<<somematrix[i][j]<<" ";
  cout<<endl;
 }
}

int main()
{  read_data();
    cout<<"Original matrix ";print_data(A,n);

for(int i=1;i<=n;i++)
  {

    for(int k=0; k<=n; k=k+1)
         C[n-k+1][i]=A[i][k];

  }

cout<<"Final matrix";
    print_data(C,n);}
