#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;
    int n;
    int size;
    int user;
    cout << "size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> n;
        arr.push_back(n);
    }

    cout << "Select an int: ";
    cin >> user;

    int greater = 0;
    int smaller = 0;
    int div = 0;

    for (int j = 0; j < size; j++)
    {
        if (user % arr[j] == 0)
        {
            div += 1;
        }
        if (arr[j] > user)
        {
            greater += 1;
        }
        else if (arr[j] < user)
        {
            smaller += 1;
        }
    }

    cout << "Greater : " << greater << endl;
    cout << "Lesser: " << smaller << endl;
    cout << "Exactly divisible: " << div << endl;

    return 0;
}