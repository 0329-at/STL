//
// Created by Administrator on 2021/9/11.
//
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    //创建deque容器的方法
    deque<int> d;   //和空的array容器不同的是，空的deque容器可以做添加和删除元素的操作

    deque<int> d01(10);      //创建一个具有10个元素的deque容器默认值为0

    //创建一个具有 n 个元素的 deque 容器，并为每个元素都指定初始值，例如：
    deque<int> d02(10, 5);

    //在已有容器的情况下，可以通过拷贝该容器创建一个新的容器
    deque<int> d03(d02);    //此方法必须容器元素类型一致

    //基于 deque 双端队列的特点，该容器包含一些 array、vector 容器都没有的成员函数。
    //由于STL的大多数操作一样我就不一一赘述了，以后只讲不同点
    d.push_back(10);    //向尾部插入元素
    d.push_front(29);   //向头部插入元素
    d.front();  //返回第一个元素的引用
    d.back();   //返回最后一个元素的引用
    d.pop_back();   //移除最后一个元素
    d.pop_front();  //移除第一个元素

    /*
     * 和 array、vector 相同，C++ 11 标准库新增的 begin() 和 end() 这 2 个全局函数也适用于 deque 容器。
     * 这 2 个函数的操作对象既可以是容器，也可以是普通数组。
     * 当操作对象是容器时，它和容器包含的 begin() 和 end() 成员函数的功能完全相同；如果操作对象是普通数组，
     * 则 begin() 函数返回的是指向数组第一个元素的指针，
     * 同样 end() 返回指向数组中最后一个元素之后一个位置的指针（注意不是最后一个元素）。
     */

    return 0;
}
