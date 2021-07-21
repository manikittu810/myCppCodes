#include <iostream>
using namespace std;

int main ()
{
    int n,i,A,D;
    char ch;

    while (cin >> n)
    {
        A = 0;
        D = 0;

        for (i=1; i<=n; i++)
        {
            cin >> ch;

            if (ch == 'A')
                A = A + 1;
            else
                D = D + 1;
        }

        if (A > D)
            cout << "Anton" << endl;
        else if (D > A)
            cout << "Danik" << endl;
        else
            cout << "Friendship"<<endl;
    }
    return 0;
}