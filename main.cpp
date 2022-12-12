#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    // Лямбда-функция вывода векторы на экран
    auto printVector = [](std::vector<int> x)
    {
        std::for_each(x.begin(), x.end(), [](int i){ std::cout << i << " "; });
        std::cout << std::endl;
    };

    std::vector<int> vec{ 4, 7, 9, 14, 12 };

    printVector(vec);

    int elemNum;
    std::transform(vec.begin(), vec.end(), vec.begin(), [elemNum = 0](int x)mutable{ return (elemNum++ % 2) ? x * 3 : x; });

    printVector(vec);

    return 0;
}
