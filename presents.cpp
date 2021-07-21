#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, p;
    cin >> n;
    vector<int> m(n+1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> p;
        m[p] = i;
    }
    cout << m[1];
    for (int i = 2; i <= n; ++i)
    {
        cout << " " << m[i];
    }
    cout << endl;
    return 0;
}
