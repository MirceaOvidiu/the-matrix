#include <iostream>
#include <fstream>
using namespace std;
int a[200][200],b[200][200],n;
int left()
{
int i,j;
for(i=l;i<=n;i++)
for(j=l;j<=n;j++)
{
b[n—j+1][i]=a[i][j];
}
return 0;
}
int right()
{
int i,j;
for(i=l;i<=n;i++)
for(i=l;i<=n;j++)
{
bljlln-i+1]=a[i] [j];
}
return 0;
}
int nshift(int x,int dir)
{
int i,j,u;
x%=4;
if(!dir)
for(u=1;u<=x;u++)
{
left();
for(i=l;i<=n;i++)
for(j=1;j<=n;j++)
{
a[i][j1=b[i][j]:
}
}
else
for(u=1;u<=x;u++)
{
left();
for(i=l;i<=n;i++)
for(j=1;j<=n;j++)
{
a[i][j1=b[i][j];
}
}
else
for(u=1;u<=X;U++)
{
for(i=l;i<=n;i++)
for(j=1;j<=n;j++)
{
a[i][j]=b[i][j];
}
right();
}
return 0;
}
int main()
{
ifstream fin ("hmm.in");
ofstream fout ("hmm.out");
int i,j,nr,t;
fin>>n;
for(i=l;i<=n;i++)
for(j=l;j<=n;j++)
{
fin>>a[i][j];
}
right();
for(i=l;i<=n;i++)
{
for(j=1;j<=n;j++)
{
fout<<b[i][j]<<' ';
}
fout<<endl;
}
}
