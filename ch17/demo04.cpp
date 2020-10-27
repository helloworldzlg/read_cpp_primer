#include <iostream>
#include <string>
#include <random>
#include <vector>

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

int feature03()
{
    static std::default_random_engine e;
    static std::uniform_int_distribution<unsigned> u(0, 9);

    std::vector<unsigned> vecI;
    unsigned int va;

    for (int i = 0; i < 10; ++i)
    {
        va = u(e);
        vecI.push_back(va);

        cout << "va = " << va << endl;
    }
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

    feature03();
    cout << "-------------------------------" << endl;
    cout << endl;

    return 0;
}