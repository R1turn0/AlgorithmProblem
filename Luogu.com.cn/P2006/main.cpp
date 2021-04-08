
#include <iostream>

int main() {
    int k, m, n;    // k 点法力值，一共有 m 个技能，boss 的体力值为 n
    std::cin >> k >> m >> n;
    int END = 0;
    int consume[m], hurt[m];
    for (int i = 0; i < m; i++)
        std::cin >> consume[i] >> hurt[i];
    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j <= 10000; j++)
        {
            if (consume[i] * j <= k && hurt[i] * j >= n)
            {
                std::cout << i + 1 << ' ';
                END = 1;
                break;
            }
            else if (consume[i] * j > k )break;
        }
    }
    if (!END)std::cout << "-1";
    return 0;
}

/*
#include<bits/stdc++.h>
int tot, num, bld, cst, hrt, flg;
int main() {
    std::cin >> tot >> num >> bld;
    for(int i = 1; i <= num; i++) {
        std::cin>>cst>>hrt;
        if((!cst && hrt) || (cst && (tot / cst) * hrt >= bld))
            flg=1,std::cout << i << ' ';
    }
    if(!flg)std::cout << -1;
    return 0;
}
*/
