// sliding window approach

#include <iostream>

using namespace std;

bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main()
{
    string s1, s2;

    cout << "Enter string1: ";
    cin >> s1;
    cout << "Enter string2: ";
    cin >> s2;

    int count1[26] = {0};

    // s1 k char count
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int i = 0;
    int count2[26] = {0};
    int windowSize = s1.length();

    // checking first two chars - first window
    while (i < windowSize)
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1, count2))
    {
        cout << "true" << endl;
    }

    else // checking aage k windows
    {
        while (i < s2.length())
        {
            char newCh = s2[i];
            int index = newCh - 'a';
            count2[index]++;

            char oldCh = s2[i - windowSize]; // jo char window se bahar gya uska count hata do
            index = oldCh - 'a';
            count2[index]--;

            i++;

            if (checkEqual(count1, count2))
            {
                cout << "true" << endl;
                break;
            }
        }
    }

    if (checkEqual(count1, count2) == false)
    {
        cout << "false" << endl;
    }

    return 0;
}