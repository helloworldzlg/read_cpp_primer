#include <iostream>
#include <string>
#include <tuple>
#include <vector>

using std::cout;
using std::endl;

int feature01()
{
    cout << ">>>>>>>>>> feature01 start >>>>>>>>>>" << endl;

    //初始化的方式
    std::tuple<int, int, int> va(1, 2, 3);
    std::tuple<int, int, int> vb = {1, 2, 3};
    std::tuple<int, int, int> vc{1, 2, 3};
    std::tuple<int, int, int> vd = std::make_tuple(1, 2, 3);

    cout << "<<<<<<<<<< feature01 end   <<<<<<<<<<" << endl;
    cout << endl;
    return 0;
}

int feature02()
{
    cout << ">>>>>>>>>> feature02 start >>>>>>>>>>" << endl;

    //支持一个tuple对象中包含多个不同类型的对象
    std::tuple<int, std::string, std::vector<int>> va(1, "zlg", {10, 20, 30});

    //通过get函数访问tuple对象的成员
    auto id = std::get<0>(va);
    cout << "id = " << id << endl;

    auto name = std::get<1>(va);
    cout << "name = " << name << endl;

    auto box = std::get<2>(va);
    cout << "box[0] = " << box[0] << endl;
    cout << "box[1] = " << box[1] << endl;
    cout << "box[2] = " << box[2] << endl;

    cout << "<<<<<<<<<< feature02 end   <<<<<<<<<<" << endl;
    cout << endl;
    return 0;
}

int feature03()
{
    cout << ">>>>>>>>>> feature03 start >>>>>>>>>>" << endl;

    //支持一个tuple对象中包含多个不同类型的对象
    std::tuple<int, std::string, std::vector<int>> va(1, "zlg", {10, 20, 30});

    //使用tuple_size获取指定tuple类型对象包含的元素个数
    typedef decltype(va) student_tuple;
    size_t size = std::tuple_size<student_tuple>::value;
    cout << "size of student_tuple: " << size << endl;

    //使用tuple_element<n,T>获取指定tuple类型对象的第n个元素类型
    std::tuple_element<2, student_tuple>::type studentA_box = std::get<2>(va);
    cout << "studentA_box[0] = " << studentA_box[0] << endl;
    cout << "studentA_box[1] = " << studentA_box[1] << endl;
    cout << "studentA_box[2] = " << studentA_box[2] << endl;

    cout << "<<<<<<<<<< feature03 end   <<<<<<<<<<" << endl;
    cout << endl;
    return 0;
}

int feature04()
{
    cout << ">>>>>>>>>> feature04 start >>>>>>>>>>" << endl;

    //对tuple对象使用关系运算符
    //注意：使用关系运算符的前提是两个tuple对象包含的元素个数相等
    std::tuple<int, int, int> va(1, 2, 3);
    std::tuple<int, int, int> vb(1, 3, 3);

    bool max = (va < vb);
    cout << "max = " << max << endl;

    //对tuple对象使用相等运算符
    std::tuple<int, int, int> vc(1, 3, 5);
    std::tuple<int, int, int> vd(2, 4, 6);
    std::tuple<int, int, int> ve(1, 3, 5);

    bool equalA = (vc == vd);
    cout << "equalA = " << equalA << endl;

    bool equalB = (vc == ve);
    cout << "equalB = " << equalB << endl;

    cout << "<<<<<<<<<< feature04 end   <<<<<<<<<<" << endl;
    cout << endl;
    return 0;
}

int feature05()
{
    cout << ">>>>>>>>>> feature05 start >>>>>>>>>>" << endl;

    cout << "<<<<<<<<<< feature05 end   <<<<<<<<<<" << endl;
    cout << endl;
    return 0;
}

int main()
{
    feature01();

    feature02();

    feature03();

    feature04();

    feature05();
    return 0;
}