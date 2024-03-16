#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cout << "Test cases = ";
    cin >> T;
    cout << '\n';

    for (int i = 0; i < T; i++)
    {
        int N;
        cout << "Size = ";
        cin >> N;
        string S;
        cout << "Enter string: ";
        cin >> S;

        int count = 0; // count 0s
        int ones = 0;  // count 1s
        int ans = 0;

        for (int j = 0; j < N; j++)
        {
            if (S[j] == '0')
            {
                count++;
                ans = max(count, ans);
            }

            else
            {
                count = 0;
                ones++;
            }
        }

        cout << "Max days present is = " << ones + ans << '\n';
        cout << '\n';
    }

    return 0;
}
