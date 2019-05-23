#include <iostream>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    cout << "numarul de coloane al primei matrici ";
    cin >> r;

    cout << "numarul de randuri al primei matrici ";
    cin >> c;

    cout << endl << "elementele primei matrici " << endl;

    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "introdu  a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }


    cout << endl << "elementele celei de-a doua matrici " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "introdu b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // adunarea
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // suma
    cout << endl << "matricea finala " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}
