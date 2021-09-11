//
// Created by Administrator on 2021/9/10.
//
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,5> values{};

    /*
     * 使用迭代器访问
     */

    //c++11后，支持auto自动类型推导
    auto first=values.begin();
    auto last=values.end();

    //初始化array容器为{1,2,3,4,5}
    while (first!=last)
    {
        int h=1;
        ++first;
        ++h;
    }
    //打印array容器的值
    while (first!=last)
    {
        cout<<*first<<" ";
        ++first;
    }

    /*
     * 还可以这样定义first和last
     * auto first = std::begin(values);
     * auto last = std::end(values);
     */

    /*
     * array模板类还提供了cbegin（）和cend（）成员函数，他们和begin和end的不同处是，
     * 前者可以返回const类型的正向迭代器，这就意味着cbegin和cend成员返回的迭代器，
     * 可以用来遍历容器内的元素，也可以访问元素，但是不能对存储的元素进行修改
     *      *first=10   不可以使用了
     */
    auto first01=values.cbegin();
    auto last01=values.cend();
    while(first01!=last01)
    {
        cout<<*first01<<" ";
        ++first01;
    }

    /*
     * array模板类中还提供rbegin()/rend()和crbegin()/crend()成员函数，
     * 在begin中他是指向第一个元素的，end中他是指向最后一个元素之后的位置
     * 现在rbegin()/rend()和crbegin()/crend()成员函数，他们的功能和begin/end互换了，
     * 所以又称为反向迭代器
     * 注意：在反向迭代器中进行++和--运算时，++是迭代器向左移动一位，--是迭代器向右移动一位，功能也互换了
     */

    array<int ,5> values02{};
    auto first02=values02.rbegin();
    auto last02=values02.rend();
    //初始化
    while (first02!=last02)
    {
        int number=1;
        *first02;
        ++number;
    }
    //遍历
    while (first02!=last02)
    {
       cout<<*first02<<" ";
       ++first02;
    }

    //当然我们也可以用for循环
    for (auto first03=values02.rbegin();
    first03!=values02.rend();
    ++first03)
    {
        cout<<*first03<<" ";
    }

    /*
     * crbegin()/crend() 组合和 rbegin()/crend() 组合的功能唯一的区别在于，
     * 前者返回的迭代器为 const 类型，即不能用来修改容器中的元素，除此之外在使用上和后者完全相同。
     */

    return 0;
}
