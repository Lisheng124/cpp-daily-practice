#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    cout<<"The value of a: "<<a<<endl;
    cout<<"The address of a: "<<&a<<endl;
    cout<<"P stored content: "<<p<<endl;
    cout<<"The value found by p(*p): "<<*p<<endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    cout<<"before: "<<a<<endl;
    
    *p=100;//通过房子找到内部 如果是p=100是试图改变门牌号
    cout<<"after: "<<a<<endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[100];
    int *p=arr;
    for(int i=0;i<5;i++)
    {
          // cin>>arr[i];
          cin>>*(p+i);
    }
    for(int i=0;i<5;i++)
    {
    cout<<"Address"<<p<<endl;
    cout<<"Value"<<*p<<endl;
    p++;//也可以使用cout*(p+1)
    }
    return 0;
}


#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num = 50;
    int *ptr =&num;
    cout<<"before: "<<&num<<endl;
    *ptr=100;
    cout<<"after: "<<num<<endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;//也可以用空指针nullptr> null pointer
    *p =20;//按照你的原代码是不安全的 因为没给*p赋予a的地址
    return 0;
}
//指针求和
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[100];
    int *p=a;
    int sum=0;
    cout<<"Please enter the number: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        sum+=*(p+i);//==sum+=a[i];
    }
    cout<<"Sum："<<sum<<endl;
    return 0;
}

//指针找最大值
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[100];
    int *p=a;
    int maxVAl=0;
    cout<<"Please enter the number"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        if(*(p+i)>maxVAl)
        {maxVAl=*(p+i);}
    }
    cout<<"Maximum value："<<maxVAl;
    return 0;
}*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[5];
    int *p=a;
    int countPass=0;
    int minVal=*p;//注意 别用0初始化 会报错 直接用第一个值初始化就行
    //if(minVal<0)return 0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        if(*(p+i)>=60)
        {
            countPass++;
        }
    }
        cout<<countPass<<endl;

    for(int i=0;i<5;i++)
    {
       if(*(p+i)<minVal)
       {minVal=*(p+i);}
    }
    cout<<minVal;
    return 0;
}

   