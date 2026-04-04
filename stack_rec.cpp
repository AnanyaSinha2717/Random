#include <bits/stdc++.h>

void inSorted(std::stack<int> &st, int t)
{
    if (st.empty() || st.top() <= t)
    {
        st.push(t);
        return;
    }

    int top = st.top();
    st.pop();

    inSorted(st, t);

    st.push(top);
}

void sortStack(std::stack<int> &st)
{
    if (st.empty())
        return;

    int t = st.top();
    st.pop();

    sortStack(st);
    inSorted(st, t);
}

int main()
{
    std::stack<int> st;
    st.push(5);
    st.push(1);
    st.push(3);
    st.push(2);
    st.push(4);

    sortStack(st);

    while (!st.empty())
    {
        std::cout << st.top() << " ";
        st.pop();
    }

    return 0;
}