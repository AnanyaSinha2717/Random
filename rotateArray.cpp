#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;
    int n, input, k;
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements" << endl;
    while (n > 0)
    {
        cin >> input;
        arr.push_back(input);
        n--;
    }

    cout << "rotate how many elements: ";
    cin >> k;

    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }

    arr = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}