#include <iostream>
#include <cstring>

template<typename T>
void OutCity(int n, int m, T city, T final);

template<typename T>
void OutCity(int n, int m, T city, T final) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << city[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << final[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main() {
    int n, m, x, y;
    std::cin >> n >> m >> x >> y;
    int city[n][m], final[n][m];
    memset(city,0,sizeof(city));
    memset(final,0,sizeof(final));
    int x1[x], y1[x], x2[x], y2[x];

    for (int i = 0; i < x; i++)
        std::cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    int KeyPointsX[y], KeyPointsY[y];
    for (int i = 0; i < y; i++)
        std::cin >> KeyPointsX[i] >> KeyPointsY[i];

    for (int z = 1; z <= x; z++)
        for (int i = (x1[z-1] - 1); i <= (x2[z-1] - 1); i++ )
            for (int j = (y1[z-1] - 1); j <= (y2[z-1] - 1); j++)
            {
                city[i][j] += 1;
                final[i][j] = z;
            }

    for (int i = 0; i < y; i++)
    {

        if (city[KeyPointsX[i] - 1][KeyPointsY[i] - 1] == 0)
            std::cout << "N" << std::endl;
        else
            std::cout << "Y " << city[KeyPointsX[i] - 1][KeyPointsY[i] - 1] << " " << final[KeyPointsX[i] - 1][KeyPointsY[i] - 1] << std::endl;
    }

//    OutCity(n, m, city, final);

    return 0;
}

//#include <iostream>
//#include <cstring>
//
//int main() {
//    int n, m, x, y;
//    std::cin >> n >> m >> x >> y;
//    if (n > 100 || m > 100)
//        return 0;
//    int city[n][m], final[n][m];
//    memset(city,0,sizeof(city));
//    memset(final,0,sizeof(final));
//    int x1[x], y1[x], x2[x], y2[x];
//    for (int i = 0; i < x; i++)
//    {
//        std::cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
//        if (x1[i] > n || y1[i] > m || x2[i] > n || y2[i] > m
//        || x1[i] <= 0 || y1[i] <= 0 || x2[i] <= 0 || y2[i] <= 0)
//            return 0;
//    }
//    for (int z = 1; z <= x; z++)
//        for (int i = (x1[z-1] - 1); i <= (x2[z-1] - 1); i++ )
//            for (int j = (y1[z-1] - 1); j <= (y2[z-1] - 1); j++)
//            {
//                city[i][j] += 1;
//                final[i][j] = z;
//            }
//
//    int KeyPointsX = 0, KeyPointsY = 0;
//    for (int i = 0; i < y; i++)
//    {
//        std::cin >> KeyPointsX >> KeyPointsY;
//        if (KeyPointsX > n || KeyPointsY > m
//        || KeyPointsX <= 0 || KeyPointsY <= 0)
//            return 0;
//        if (city[KeyPointsX - 1][KeyPointsY - 1] == 0)
//            std::cout << "N" << std::endl;
//        else
//            std::cout << "Y " << city[KeyPointsX - 1][KeyPointsY - 1] << " " << final[KeyPointsX - 1][KeyPointsY - 1] << std::endl;
//    }
//    return 0;
//}

