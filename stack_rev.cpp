#include <bits/stdc++.h>

void inBottom(std::stack<int> &st, int t)
{
    if (st.empty())
    {
        st.push(t);
        return;
    }

    int top = st.top();
    st.pop();

    inBottom(st, t);

    st.push(top);
}

void revStack(std::stack<int> &st)
{
    if (st.empty())
        return;

    int t = st.top();
    st.pop();

    revStack(st);
    inBottom(st, t);
}

int main()
{
    std::stack<int> st;
    st.push(5); // bottom
    st.push(1);
    st.push(3);
    st.push(2);
    st.push(4); // top

    revStack(st);

    while (!st.empty())
    {
        std::cout << st.top() << " ";
        st.pop();
    }

    return 0;
}