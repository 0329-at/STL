//
// Created by Administrator on 2021/9/10.
//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //创建vector的方式
    vector<double> values;  //这是个空的容器，容器中没有元素

    vector<int> primes{10,20,30,40,50};     //创建容器的同时并初始化

    vector<int> values02(20);   //创建容器并指定容器个数为20，默认值都为0

    vector<int> values03(20,1);     //第二个参数指定了所有元素的初始值为1

    //另外括号里的连个参数，既可以是常量也可以是变量
    int num=10;
    double elme=1.0;
    vector<double> values04(num,elme);

    //通过存储类型相同的其他vector容器，也可以创建新的容器。
    vector<char> ch01(5,'c');
    vector<char> ch02(ch01);
    //如果不想复制其他容器中所有的元素，可以用一对指针或者迭代器来指定初始值的范围
    int array[]={1,2,3};
    vector<int> Integer(array,array+1);  //将包村1,2
    vector<int> Integer02{1,2,3,4,5};
    vector<int> Integer03(begin(Integer02), end(Integer03));

    return 0;
}
