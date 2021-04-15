#include <iostream>
using namespace std;

int flip(int);

int main() {

    int n,b = 0,ii = 0;
        cin >> n; // so you need to input one positive odd number N, and it will return an N by N matrix,
        
        //where 1 is in the center, zeros in its neighborhood, ones in zeros' outer neighborhoods and so on...
        // for example inputing 5 will yeild such a 5 by 5 matrix:

                    //11111
                    //10001
                    //10101
                    //10001
                    //11111
    
    
    if(n < 0)
    {
        n*=-1;
        cout << "your input is negative, so we will take '" << n << "' as an input" << endl << endl;
    }
        if(n % 2 == 0)
        {
            n++;
            cout << "your input is even, so we will take '" << n << "' as an input" << endl << endl;
        }

    int arr[n][n];

    if((n + 3) % 4 == 0)
{
    b++;
}

    for(int i = 0;i < n;i++)
    {
        ii = i;
        if (i > (-1 + n / 2))
        {
            ii = n - i - 1;
        }
        for(int j = 0;j < ii;j++)
        {
            arr[i][j] = b;

            b = flip(b);
            cout << arr[i][j];
        }
        for(int j = 0;j < (n - 2*ii);j++)
        {
            arr[i][j] = b;
            cout << arr[i][j];
        }
        for(int j = 0;j < ii;j++)
        {
            b = flip(b);
            arr[i][j] = b;

            cout << arr[i][j];
        }
        cout << endl;
    }

    cout << endl << "a " << n << " by " << n << " matrix, with 1 at the center, and alternating values" << endl;

    return 0;
}


int flip(int i)
{
    i--;
    i*=-1;
    return i;
}

