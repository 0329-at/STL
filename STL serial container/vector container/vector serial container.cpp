//
// Created by Administrator on 2021/9/10.
//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> velues{10,20,30,40};

    //vector的成员函数
    velues.begin();	    //返回指向容器中第一个元素的迭代器。

    velues.end();	    //返回指向容器最后一个元素所在位置后一个位置的迭代器，通常和 begin() 结合使用。

    velues.rbegin();    //返回指向最后一个元素的迭代器。

    velues.rend();	    //返回指向第一个元素所在位置前一个位置的迭代器。

    velues.cbegin();	//和 begin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。

    velues.cend();	    //和 end() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。

    velues.crbegin();	//和 rbegin() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。

    velues.crend();	    //和 rend() 功能相同，只不过在其基础上，增加了 const 属性，不能用于修改元素。

    velues.size();	    //返回实际元素个数。

    velues.max_size(); 	//返回元素个数的最大值。这通常是一个很大的值，
                        // 一般是 2e32-1，所以我们很少会用到这个函数

    velues.resize(20);	//改变实际元素的个数,
    //如果n小于当前容器的大小，则将内容减少到其前n个元素，并删除超出范围的元素（并销毁它们）。
    //如果n大于当前容器的大小，则通过在末尾插入所需数量的元素来扩展内容，
    // 以达到n的大小,原来容器的值不变，增加的值可以指定，如果不指定则以0初始化


    // 如果指定了val，则将新元素初始化为val的副本，否则将对它们进行值初始化。
    velues.resize(8,100);
    //如果n也大于当前容器容量，将自动重新分配已分配的存储空间。


    velues.capacity();	//返回当前容量。

    velues.empty(); 	//判断容器中是否有元素，若无元素，则返回 true；反之，返回 false。

    velues.reserve(20);	//增加容器的容量，容量不是容器的元素个数，
    // 而是容器所能容纳元素的最大个数
    //使用reserve可以改变容器的容量

    velues.shrink_to_fit();	//将内存减少到等于当前元素实际所使用的大小。
    //在容器中可能会遇到容器容量多于实际元素，那么多余的容量将会浪费，shrink_to_fit()会匹配实际所使用的的大小

    velues[3];	    //重载了 [ ] 运算符，可以向访问数组中元素那样，
                            // 通过下标即可访问甚至修改 vector 容器中的元素。

    velues.at(2);	    //使用经过边界检查的索引访问元素。

    velues.front();     //返回第一个元素的引用。

    velues.back();	    //返回最后一个元素的引用。

    velues.data();	    //返回指向容器中第一个元素的指针。

    //用新元素替换原有内容,它通过替换旧元素为向量元素分配新值。
    // 如果需要，它也可以修改向量的大小。
    int array[4]={1,2,3,4};
    auto first=velues.begin();
    auto last=velues.end();
    velues.assign(first,last);      //把区间first到end的值赋给velus

    velues.assign(10,6);    //把n个值为val的元素赋到vector容器中，这个容器会清除以前的内容

    velues.push_back(10);	//在序列的尾部添加一个元素。

    velues.pop_back();	//移出序列尾部的元素。

    //在指定的位置插入一个或多个元素。
    velues.insert(velues.begin(),8);    //在最前面插入新元素8

    velues.insert(velues.begin()+2,1);      //在迭代器第二个元素前插入元素1

    velues.insert(velues.end(),4,1);    //在容器末尾插入4个1

    //移出一个元素或一段元素。
    velues.erase(velues.end());     //删除末尾元素

    velues.erase(velues.begin(),velues.begin()+3);      //删除前三个元素

    velues.clear();     //移出所有的元素，容器大小变为 0。

    vector<int> velues01;
    velues.swap(velues01);	    //交换两个容器的所有元素。

    velues.emplace(velues.begin()+2,6);	//在指定的位置直接生成一个元素。

    velues.emplace_back();	//在序列尾部生成一个元素
    //emplace_back看起来和push_back的区别不大，
    // 都是在尾部添加元素，但是由于底层实现机制的不同push_back() 向容器尾部添加元素时，
    // 首先会创建这个元素，然后再将这个元素拷贝或者移动到容器中（如果是拷贝的话，事后会自行销毁先前创建的这个元素）；
    // 而 emplace_back() 在实现时，则是直接在容器尾部创建这个元素，省去了拷贝或移动元素的过程。

    return 0;
}
