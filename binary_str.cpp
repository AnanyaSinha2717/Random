#include <bits/stdc++.h>

void gen(int n, std::string s, std::vector<std::string> &res)
{
    if (s.size() == n)
    {
        res.push_back(s);
        return;
    }

    gen(n, s + '0', res);

    if (s.empty() || s.back() != '1')
    {
        gen(n, s + '1', res);
    }
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::string> res;

    gen(n, "", res);
    for (std::string &s : res)
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    return 0;
}