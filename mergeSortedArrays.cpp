#include <iostream>
#include <vector>

using namespace std;

void shift(int nums1[], int m, int nums2[], int n, int nums3[])
{
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            nums3[k++] = nums1[i++];
        }
        else
        {
            nums3[k++] = nums2[j++];
        }
    }
    // copy first array k elements
    while (i < m)
    {
        nums3[k++] = nums1[i++];
    }
    // copy second array k elements
    while (j < n)
    {
        nums3[k++] = nums2[j++];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int nums1[5] = {1, 3, 5, 7, 9};

    printArray(nums1, 5);

    int nums2[3] = {2, 4, 6};

    printArray(nums2, 3);

    int m = 5, n = 3;

    int nums3[m + n];

    shift(nums1, m, nums2, n, nums3);
    printArray(nums3, m + n);

    return 0;
}