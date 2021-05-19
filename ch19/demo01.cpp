#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Base
{
public:
    virtual void printA()
    {
        cout << "this is Base::printA" << endl;
    }
};

class Derived : public Base
{
public:
    void printA()
    {
        cout << "this is Derived::printA" << endl;
    }
};

int feature01()
{
    Base *pa = new Derived();

    try
    {
        Derived *pb = dynamic_cast<Derived *>(pa);
        cout << "Base dynamic_cast to Derived success" << endl;

        pb->printA();
    }
    catch (...)
    {
        cout << "Base dynamic_cast to Derived failure" << endl;
    }

    delete pa;
    return 0;
}

int main()
{
    feature01();
    return 0;
}