// max area of rectangle with longest diagonal
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int d, max_d = 0, area = 0;

    int dimensions[2][2] = {{2, 3}, {8, 8}};
    for (int i = 0; i < 2; i++)
    {
        int l = dimensions[i][0];
        int b = dimensions[i][1];
        d = l * l + b * b;
        cout << "dia of rec" << i << " = " << d << endl;

        if (d > max_d || (d == max_d && l * b > area))
        {
            max_d = d;
            area = l * b;
        }
    }
    cout << "area of max diag rectangle = " << area << endl;
    return 0;
}