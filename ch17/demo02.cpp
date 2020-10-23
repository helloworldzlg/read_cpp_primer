#include <iostream>
#include <string>
#include <bitset>

using std::cout;
using std::endl;

//bitset对象的构造
int feature01()
{
    cout << ">>>>>>>>>> feature01 start >>>>>>>>>>" << endl;

    //默认构造填充的每一位都是0
    std::bitset<32> va;
    cout << "va = " << va << endl;

    //vb是0xFFFF的低32位拷贝
    std::bitset<32> vb(0xFFFF);
    cout << "vb = " << vb << endl;

    //vc是字符串s第4位开始拷贝的5位字符值
    std::string s = "1111010010";
    std::bitset<32> vc(s, 4, 5);
    cout << "vc = " << vc << endl;

    cout << "<<<<<<<<<< feature01 end   <<<<<<<<<<" << endl;
    cout << endl;
    return 0;
}

int main()
{
    feature01();

    return 0;
}