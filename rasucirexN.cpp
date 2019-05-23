
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
bln-j+1] [i]=a[i] [j];
}
return 0;
}
int right()
{
int i,j;
for(i=l;i<=n;i++)
for(i=l;i<=n;i++)
{
b[j][n-i+1]=a[i][j];
}
return 0;
}
int nshift(int x,int dir)
{
int i,j,u;
x%=4;
if(!dir)
for(u=l;u<=x;u++)
{
left();
for(i=l;i<=n;i++)
for(j=1;j<=n;j++)
{
ali][j1=b[i][j];
}
}
else
for(u=1;u<=x;u++)
    for(u=1;u<=x;u++)
{
left();
for(i=l;i<=n;i++)
for(i=l;i<=n;i++)
{
a[i][j]=b[i][j];
}
}
else
for(u=1;u<=x;u++)
{
for(i=l;i<=n;i++)
for(j=1;j<=n;j++)
{
aIi][j]=b[i][j];
}
right();
}
return 0;
}
int main()
{
ifstream fin ("input.dat");
ofstream fout ("output.dat);
int i,j,nr,t;
fin>>n;
for(i=l;i<=n;i++)

for(j=1;j<=n;j++)
{
fin>>a[i][j];
}
fin>>nr;
fin>>t; ///nr=de cate ori rotim si t
///directia 0—>stanga l—>dreapta
nshift(nr,t);
for(i=l;i<=n;i++)
{
for(j=1;j<=n;j++)
{
fout<<b[i][j]<<' ';
}
fout<<endl;
}
}
