//
// Created by Administrator on 2021/9/10.
//
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,5> value{1,2,3,4,5};

    //首先可以通过容器名[]的方式访问和使用容器的中的元素，和c++数组访问元素的方式相同
    //但是此方法没有做边界检查，即是使用越界的索引值去访问或储存元素，也不会被检测到
    value[4]=value[3]+2*value[1];

    //为了有效的避免越界访问情况，可以使用array容器提供的at()成员函数
    value.at(4)=value.at(3)+2*value.at(1);
    //这行代码和前一句语句实现的功能相同，但是当at()的索引越界时，会抛出std::out_of_range异常，
    //访问所以容器中某个指定元素是，建议使用at()
    /*
     * 读者可能有这样一个疑问，即为什么 array 容器在重载 [] 运算符时，没有实现边界检查的功能呢？
     * 答案很简单，因为性能。如果每次访问元素，都去检查索引值，无疑会产生很多开销。
     * 当不存在越界访问的可能时，就能避免这种开销。
     */

     //array容器提供了get<N> 模板
    get<3>(value);  //访问第三个元素

    //array容器提供了data()成员函数，通过函数可以得到指向容器首个元素的指针，
    //通过指针，我们可以获得访问容器中的各个元素
    int sum=*(value.data()+3);
    cout<<*(value.data()+3);

    return 0;
}
