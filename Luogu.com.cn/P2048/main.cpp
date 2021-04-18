#include <iostream>
#include <cstring>
#include <cstdio>

//int main()
//{
//    int M, N;   // M进制的数N转换成十进制
//    std::cin >> M >> N;
//    int number = N, sum = 0;
//    int num = 0, End = 0;
//    while (true)
//    {
//        sum++;
//        num = number % 10;
//        for (int i = 1; i < sum; i++)
//            num = num * M;
//        End = End + num;
//        number = number / 10;
//        if (number == 0)
//            break;
//    }
//    std::cout << End << std::endl;
//
//    return 0;
//}

int main()
{
    int M;
    std::string a;
    std::cin >> M >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if(i!=0&&a[i]!='0')
            printf("+");
        if (a[i]=='0')
            continue;
        std::cout << a[i] << "*" << M << "^" << a.size()-i-1;
//        printf("%c*%ld^%ld",a[i],M,a.size()-i-1);
    }
    return 0;
}
