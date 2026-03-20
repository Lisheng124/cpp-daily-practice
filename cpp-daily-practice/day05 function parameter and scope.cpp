//题1：交换两个数（失败版）
/*#include <iostream>
using namespace std;
void swap(int a,int b)
{
    int temp=a;
    a = b;
    b = temp;
}

int main()
{
    int a =0;
    int b =0;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<endl<<b;
    return 0;
}
//如果是void函数在主函数的时候不用提供类型，因为返回不带任何东西，打印的时候 直接打印（）里面的数字或者字母
//但如果是正常类型，在主函数就要加上类型 因为要带东西回来，要打印赋值的东西，不打印（）的
//void>xx() double>double=xx()
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a = b;
    b = temp;
}

int main()
{
    int a =0;
    int b =0;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<endl<<b;
    return 0;
}*/
//题3：数组求和（函数）
/*#include<iostream>
using namespace std;
int sumval(int arr[],int n)
{
     int sum=0;
    for(int i =0;i<n;i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    int num[100];
    cout<<"Please enter the money of the students: ";
    cin>>n;
   cout<<"The money of each students is: ";
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
            int sum=sumval(num,n);

    cout<<"The sum of the number is "<<sum;
    return 0;
}*/

//题4：修改数组元素
/*#include<iostream>
using namespace std;
void change(int arr[], int n)
{
    for(int i=0;i<n;i++)
    //arr[i] *=arr[i];//这是变成^2了
    arr[i]*=2;
    //return arr[i];//它是空手出来的
}
int main()
{
    int n;
    int num[100];
    cin>>n;//输入数量
    for(int i=0;i<n;i++)
    {
    cin>>num[i];//输入号码
    }
    change(num,n);
    for(int i=0;i<n;i++)
    {
            cout<<num[i]<<endl;//打印改变之后的结果
    }
    return 0;
}
//int x> 不改动原件 （寄了一张照片（副本）。）
//int &x> 加了& 改动原件（把本人请过去。）
//arr[]> 也会改动原件 （直接给了大门钥匙。）
//为什么数组不需要 & 这个“通行证”了吗？
//因为它自己就是“通行证”本人！

//题5：局部变量 vs 全局变量
#include<iostream>
using namespace std;
int x=10;
int main()
{
    int x=5;
    cout<<x<<endl;
    return 0;
}
//输出 5>局部变量优先

题6：作用域测试（重点）
#include<iostream>
using namespace std;
void test() {
    int a = 10;
}
int main()
{
    cout << a;
    return 0;

}
//变量(exam=a)只能在自己作用域内使用

小程序
数组处理系统（带参数控制）*/
#include<iostream>
using namespace std;
void multiply(int arr[], int n, int k)
{
    for(int i=0;i<n;i++)
    {
        arr[i] *=k;
    }
}
int main()
{
    int n;
    cout<<"Please enter the number: ";
    cin>>n;
    int k;
    cout<<"Please enter the multiply's value: ";
    int num[100];
    cin>>k;
    cout<<"Please enter the value: ";

     for(int i=0;i<n;i++)
     {
         cin>>num[i];
     }
     multiply(num,n,k);
     for(int i=0;i<n;i++)
     {
         cout<<"The result is: "<<num[i]<<endl;
     }
    return 0;
}
