#include <iostream>
#include <queue>

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                std::swap(arr[index], arr[parent]);
            }
            else
                return;
        }
    }

    void deleteVal()
    {
        if (size == 0)
        {
            std::cout << "empty heap\n";
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size)
        {
            int lchild = 2 * i;
            int rchild = 2 * i + 1;

            if (lchild < size && arr[i] < arr[lchild])
            {
                std::swap(arr[i], arr[lchild]);
                i = lchild;
            }
            else if (rchild < size && arr[i] < arr[rchild])
            {
                std::swap(arr[i], arr[rchild]);
                i = rchild;
            }
            else
                return;
        }
    }

    void display()
    {
        for (int i = 1; i <= size; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << '\n';
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        std::swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        std::swap(arr[size], arr[1]);
        size--;
        heapify(arr, size, 1);
    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.display();

    h.deleteVal();
    h.display();

    int arr[6] = {-1, 50, 55, 54, 53, 52};
    int n = 5;
    // build heap
    for (int i = n / 2; i >= 1; i--)
    {
        heapify(arr, n, i);
    }

    for (int i = 1; i <= n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';

    // heapsort
    heapSort(arr, n);

    std::cout << "sorted array: ";
    for (int i = 1; i <= n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';

    std::cout << "using priority queue:\n";
    // maxheap
    std::priority_queue<int> pq;

    pq.push(3);
    pq.push(5);
    pq.push(1);
    pq.push(2);

    std::cout << "ele at top: " << pq.top() << std::endl;
    pq.pop();
    std::cout << "ele at top: " << pq.top() << std::endl;
    std::cout << "size: " << pq.size() << std::endl;

    //minheap
    std::priority_queue<int, std::vector<int>, std::greater<int>> mp;

    mp.push(5);
    mp.push(1);
    mp.push(8);
    mp.push(9);

    std::cout << "ele at top: " << mp.top() << std::endl;

    return 0;
}
