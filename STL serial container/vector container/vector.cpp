//
// Created by Administrator on 2021/9/10.
//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //����vector�ķ�ʽ
    vector<double> values;  //���Ǹ��յ�������������û��Ԫ��

    vector<int> primes{10,20,30,40,50};     //����������ͬʱ����ʼ��

    vector<int> values02(20);   //����������ָ����������Ϊ20��Ĭ��ֵ��Ϊ0

    vector<int> values03(20,1);     //�ڶ�������ָ��������Ԫ�صĳ�ʼֵΪ1

    //����������������������ȿ����ǳ���Ҳ�����Ǳ���
    int num=10;
    double elme=1.0;
    vector<double> values04(num,elme);

    //ͨ���洢������ͬ������vector������Ҳ���Դ����µ�������
    vector<char> ch01(5,'c');
    vector<char> ch02(ch01);
    //������븴���������������е�Ԫ�أ�������һ��ָ����ߵ�������ָ����ʼֵ�ķ�Χ
    int array[]={1,2,3};
    vector<int> Integer(array,array+1);  //������1,2
    vector<int> Integer02{1,2,3,4,5};
    vector<int> Integer03(begin(Integer02), end(Integer03));

    return 0;
}
