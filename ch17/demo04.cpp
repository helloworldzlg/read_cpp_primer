#include <iostream>
#include <string>
#include <random>

using std::cout;
using std::endl;

int feature01()
{
    std::default_random_engine e;

    for (int i = 0; i < 10; ++i)
        cout << "rand[" << i << "] = " << e() << endl;

    return 0;
}

int feature02()
{
    std::uniform_int_distribution<unsigned> u(0, 9);
    std::default_random_engine e;

    for (int i = 0; i < 10; ++i)
        cout << u(e) << " ";
    cout << endl;
    return 0;
}

int main()
{
    feature01();
    cout << "-------------------------------" << endl;
    cout << endl;

    feature02();
    cout << "-------------------------------" << endl;
    cout << endl;

    return 0;
}