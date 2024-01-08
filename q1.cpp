#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int cases;
    string n, old_n;
    cout << "number of cases: ";
    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        cin >> old_n;
        n = old_n;
        for (int j = 0; j <= n.length() / 2; j++)
        {
            swap(n[j], n[n.length() - j - 1]);
        }

        if (old_n == n)
        {
            cout << "String is a Palindrome" << endl;
        }
        else
        {
            cout << "String is not a Palindrome" << endl;
        }
    }

    return 0;
}