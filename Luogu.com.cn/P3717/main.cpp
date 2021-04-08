#include<bits/stdc++.h>

int main() {
    int n = 0, m = 0, r = 0;
    std::cin >> n >> m >> r;
    int mp[n + 1][n + 1], x[m], y[m];
    int sum = 0;
    memset(mp, 0, sizeof(mp));

    for (int i = 0; i < m; i++)
        std::cin >> y[i] >> x[i] ;

    double r1;
    for(int z = 0; z < m; z++)
    {
        mp[x[z]][y[z]] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                r1 = sqrt((x[z] - i) * (x[z] - i) + (y[z] - j) * (y[z] - j));
                if(r1 <= r)
                {
                    mp[i][j] = 1;
                }
            }
        }
    }

    for (int i = 1; i <= n ;i++)
    {
        for (int j = 1; j <= n; j++)
        {
            std::cout << mp[i][j] << " ";
            if (mp[i][j] == 1)
                sum++;
        }
        std::cout << std::endl;
    }
    std::cout << sum;

    return 0;
}
