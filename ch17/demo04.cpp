#include <iostream>
#include <string>
#include <random>

using std::cout;
using std::endl;

int feature01()
{
    cout << ">>>>>>>>>> feature01 start >>>>>>>>>>" << endl;

    std::default_random_engine e;

    for (int i = 0; i < 10; ++i)
        cout << "rand[" << i << "] = " << e() << endl;

    cout << "<<<<<<<<<< feature01 end   <<<<<<<<<<" << endl;
    cout << endl;
    return 0;
}

int main()
{
    feature01();

    return 0;
}