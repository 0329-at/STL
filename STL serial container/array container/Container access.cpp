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
     * ʹ�õ���������
     */

    //c++11��֧��auto�Զ������Ƶ�
    auto first=values.begin();
    auto last=values.end();

    //��ʼ��array����Ϊ{1,2,3,4,5}
    while (first!=last)
    {
        int h=1;
        ++first;
        ++h;
    }
    //��ӡarray������ֵ
    while (first!=last)
    {
        cout<<*first<<" ";
        ++first;
    }

    /*
     * ��������������first��last
     * auto first = std::begin(values);
     * auto last = std::end(values);
     */

    /*
     * arrayģ���໹�ṩ��cbegin������cend������Ա���������Ǻ�begin��end�Ĳ�ͬ���ǣ�
     * ǰ�߿��Է���const���͵�����������������ζ��cbegin��cend��Ա���صĵ�������
     * �����������������ڵ�Ԫ�أ�Ҳ���Է���Ԫ�أ����ǲ��ܶԴ洢��Ԫ�ؽ����޸�
     *      *first=10   ������ʹ����
     */
    auto first01=values.cbegin();
    auto last01=values.cend();
    while(first01!=last01)
    {
        cout<<*first01<<" ";
        ++first01;
    }

    /*
     * arrayģ�����л��ṩrbegin()/rend()��crbegin()/crend()��Ա������
     * ��begin������ָ���һ��Ԫ�صģ�end������ָ�����һ��Ԫ��֮���λ��
     * ����rbegin()/rend()��crbegin()/crend()��Ա���������ǵĹ��ܺ�begin/end�����ˣ�
     * �����ֳ�Ϊ���������
     * ע�⣺�ڷ���������н���++��--����ʱ��++�ǵ����������ƶ�һλ��--�ǵ����������ƶ�һλ������Ҳ������
     */

    array<int ,5> values02{};
    auto first02=values02.rbegin();
    auto last02=values02.rend();
    //��ʼ��
    while (first02!=last02)
    {
        int number=1;
        *first02;
        ++number;
    }
    //����
    while (first02!=last02)
    {
       cout<<*first02<<" ";
       ++first02;
    }

    //��Ȼ����Ҳ������forѭ��
    for (auto first03=values02.rbegin();
    first03!=values02.rend();
    ++first03)
    {
        cout<<*first03<<" ";
    }

    /*
     * crbegin()/crend() ��Ϻ� rbegin()/crend() ��ϵĹ���Ψһ���������ڣ�
     * ǰ�߷��صĵ�����Ϊ const ���ͣ������������޸������е�Ԫ�أ�����֮����ʹ���Ϻͺ�����ȫ��ͬ��
     */

    return 0;
}
