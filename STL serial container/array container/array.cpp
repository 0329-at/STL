//
// Created by Administrator on 2021/9/10.
//
#include <iostream>
#include <array>
using namespace std;
//array荣器的模板形式
/*  nasmespace std
 *  {
 *      template<typename T,size_N>
 *      class array
 *  }
 *  在 array<T,N> 类模板中，T 用于指明容器中的存储的具体数据类型，N 用于指明容器的大小，
 *  需要注意的是，这里的 N 必须是常量，不能用变量表示。
 */

int main()
{
    /*
     * 初始化array容器的方法
     */
    //创建一个double类型的array容器，包含10个浮点数，并将所有元素初始化为0
    std::array<double,10> values01{};
    //创建array容器的实例，并对其元素初始化
    std::array<double,10> values02{1,2,3,4};

    /*
     * 成员函数
     */
    values01.begin();   //返回指向容器第一个元素的随机迭代器
    values01.end();     //返回指向容器最后一个元素之后的随机迭代器，通常和begin结合使用
    values01.rbegin();  //返回指向容器最后一个元素的随机迭代器
    values01.rend();    //返回指向容器第一个元素之前位置的随机迭代器
    values01.cbegin();  //和begin功能相同，在起属性上加了const，不能修改元素
    values01.cend();    //和eng功能相同，在起属性上加了const，不能修改元素
    values01.crbegin(); //和rbegin功能相同，在起属性上加了const，不能修改元素
    values01.crend();   //和rend功能相同，在起属性上加了const，不能修改元素
    values01.size();    //返回容器中当前元素的数量，其值等于初始哈了array类的第二个模板参数
    values01.max_size();//返回容器可容纳元素的最大数量，其值等于初始哈了array类的第二个模板参数
    values01.empty();   //判断容器是否为空，和通过size（）==0的判断条件功能相同，但效率可能更快
    values01.at(2);  //返回容器n位置处元素的引用，
                        // 该函数自动检查n是否在有效范围内，如果不是则抛出out_of_range异常
    values01.front();   //返回该荣器中第一个元素的引用，该函数不适用为空的array容器
    values01.back();    //返回该容器中最后一个元素的引用，该该函数不适用为空的array容器
    values01.data();    //返回该容器首个元素的指针，利用该指针，可实现复刻容器中所有元素的功能
    values01.fill(10);//把u这个值赋给容器的每个元素
    values01.swap(values02);//交换value01和value02容器中的所有元素，但前提是他们容器的类型和长度相同

    //array重载get函数，他可以获取到容器的n个元素
    std::cout<<std::get<3>(values01);

    return 0;
}
