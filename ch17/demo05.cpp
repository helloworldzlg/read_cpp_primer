#include <iostream>
#include <string>
#include <random>
#include <vector>

using std::cout;
using std::endl;

int feature01()
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

    return 0;
}