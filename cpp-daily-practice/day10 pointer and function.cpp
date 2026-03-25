#include <iostream>
using namespace std;
void Function(int *p) 
{
    *p=100;
}

int main()
{
    int a =0;
    Function(&a);
    cout<<a<<endl;
    return 0;
}

#include <iostream>
using namespace std;

// 1. 值传递 (Pass by Value) - 复制一份，不影响原变量
void funcValue(int n) {
    n = 999; 
}

// 2. 指针传递 (Pass by Pointer) - 传入地址，通过解引用修改原变量
void funcPointer(int* p) {
    if (p != nullptr) { // C++ 建议检查空指针
        *p = 100; 
    }
}

// 3. 引用传递 (Pass by Reference) - C++ 推荐方式，更简洁安全
// 这里的 n 就像是原变量的一个“别名”
void funcReference(int& n) {
    n = 200; 
}

int main() {
    int a = 10;

    cout << "初始值: a = " << a << endl;

    // 尝试值传递
    funcValue(a);
    cout << "值传递后: a = " << a << " (没变)" << endl;

    // 尝试指针传递
    funcPointer(&a); // 注意要取地址 &
    cout << "指针传递后: a = " << a << " (变了)" << endl;

    // 尝试引用传递
    funcReference(a); // 像普通变量一样传即可，不需要 &
    cout << "引用传递后: a = " << a << " (又变了)" << endl;

    return 0;
}
#include<iostream>
using namespace std;
void makeSquare(int *p)
{
 *p *= *p;
}
int main()
{
  int n=0;
  cout<<"Please enter a number: ";
 if(!(cin>>n))return 0;
  makeSquare(&n);
  cout<<n<<endl;
  return 0;
}
//交换数组中最大值和最小值（用指针）
#include<iostream>
using namespace std;

int maxValue(int *p,int n)
{
  //max=*p[0];
  int max=p[0];
  for(int i=0;i<n;i++)
  {
    if(p[i]>max)//！*p[i]
    {max=p[i];}//!*p[i]
  }
  return max;
}
int minValue(int*p,int n)
{
int min=p[0];//p[0]=*p
 for(int i=0;i<n;i++)
{
  if(p[i]<min)
  {min=p[i];}//p[i]=*(p+i)
}
return min;
}
void SwapMaxMin(int *p,int n)
{
  int maxIndex=0;
  int minIndex=0;
  for(int i=0;i<n;i++)
  {
    //if(swap[i]=max)//比较 所以得用==
    if(p[i]>p[maxIndex])
    maxIndex=i;
    else if(p[i]<p[minIndex])
    minIndex=i;
  }
  int temp=p[maxIndex];
  p[maxIndex]=p[minIndex];
  p[minIndex]=temp;
}
int main()
{
  int n=0;
  cout<<"Please enter the number: ";
  cin>>n;
 // int p=*p;
 int p[100];
  for(int i=0;i<n;i++)
  {
    cin>>p[i];
  }
  int min=minValue(p,n);
  int max=maxValue(p,n);
  SwapMaxMin(p,n);
  cout<<"Min："<<min<<endl;
  cout<<"Max："<<max<<endl;
  cout << "After swap: ";
    for(int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

}

//👉 输入两个数，交换后输出
#include<iostream>
using namespace std;
void numSwap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
  int a=10;
  int b=15;
  numSwap(&a,&b);
  cout<<a<<"\t"<<b<<endl;
  return 0; 
}

//返回数组的最大值和最小值
#include <iostream>
using namespace std;

// 修正：确保所有逻辑都在函数花括号内
void getMinMax(int *arr, int n, int *pMin, int *pMax) 
{
    if (n <= 0) return;

    // 1. 先用局部变量记录第一个元素
    int maxTemp = arr[0];
    int minTemp = arr[0];

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > maxTemp) { maxTemp = arr[i]; }
        if (arr[i] < minTemp) { minTemp = arr[i]; }
    }

    // 2. 关键：通过指针把结果“寄”回给 main 函数
    *pMax = maxTemp;
    *pMin = minTemp;
}

int main() 
{
    int num[100];
    int n;
    
    cout << "请输入数组长度: ";
    cin >> n;

    cout << "请输入 " << n << " 个数字: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> num[i]; // 修正：读入到具体的数组下标
    }

    int maxVal, minVal;

    // 3. 传入地址
    getMinMax(num, n, &minVal, &maxVal);

    cout << "数组最大值: " << maxVal << endl;
    cout << "数组最小值: " << minVal << endl;

    return 0;
}
#include<iostream>
using namespace std;
struct Result
{
  int max;
  int min;
};
 
Result findMinMax(int *arr,int n)
{
  Result res;
  res.max=arr[0];
  res.min=arr[0];
  for(int i=1;i<n;i++)
  {
    if (arr[i] > res.max) res.max = arr[i];
        if (arr[i] < res.min) res.min = arr[i];
  }
  return res;
}
int main()
{
  int num[100];
  for(int i=0;i<5;i++)
  {
    cin>>num[i];
  }
  Result r=findMinMax(num,5);
  cout << "Max: " << r.max << ", Min: " << r.min << endl;
  return 0;
    
}

//返回最大值，次大值，最小值
#include<iostream>
#include <climits> // 必须有它才能用 INT_MIN
using namespace std;
struct Result
{
  int max;
  int min;
  int sec;//second
};

Result findMinMaxSec(int *arr,int n)
{
 // if (n <= 0) {
       // return {0, 0, 0};
  Result res;
  res.max=arr[0];
  res.min=arr[0];
  res.sec=INT_MIN;//初始化为极小值，确保谁都可以代替它
   for(int i=1;i<n;i++)
  {
     if(arr[i]<res.min){res.min=arr[i];}
     if(arr[i]>res.max){res.sec=res.max;res.max=arr[i];}
  else if(arr[i]>res.sec&&arr[i]<res.max)
  {res.sec=arr[i];} 
  }
  return res;
}
int main()
{
  int num[100];
  int n=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  Result r=findMinMaxSec(num,n);
  cout << "最大值: " << r.max << endl;
    cout << "次大值: " << r.sec << endl;
    cout << "最小值: " << r.min << endl;
    
    return 0;
}

#include<iostream>
using namespace std;
struct Cube
{
  int value;
};
Cube number(int *p)
{
  *p *=(*p) *(*p);
  Cube res;
  res.value=*p;
  return res;
}
int main()
{
  int n;
  cin>>n;
  int num[100];
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
   Cube c=number(&num[i]);
  cout<<c.value;
    
  }

  return 0;
}

#include <iostream>
using namespace std;
struct OddEven
{
  int odd;
  int even;
};
OddEven FindType(int *p)
{
  OddEven res;
  if((*p)%2 == 0)
  {
   *p = (*p)/2;
    res.even=*p;
  }
  else
  {
    *p = (*p)*3+1;
    res.odd=*p;
  }
  return res;
}
int main()
{
  int n;
  if(!(cin>>n)||n<=0)return 0;
  cout<<n;
  while(n != 1)
  {
  FindType(&n);
cout << "-> " << n << " ";   
  }
  return 0;
}
#include <iostream>
using namespace std;
struct OddEven
{
  int odd;
  int even;
};
OddEven FindType(int *p)
{
  OddEven res;
  if((*p)%2 == 0)
  {
   *p = (*p)/2;
    res.even=*p;
  }
  else
  {
    *p = (*p)*3+1;
    res.odd=*p;
  }
  return res;
}
int main()
{
  int n;
  if(!(cin>>n)||n<=0)return 0;
  cout<<n;
  int arr[10];
// 1. 先输入数据
for (int i = 0; i < n; i++) {
    cout << "请输入第 " << i + 1 << " 个数字: ";
    cin >> arr[i];
}

// 2. 再进行你写的处理逻辑
for (int i = 0; i < n; i++) {
    FindType(&arr[i]);
    cout << "第 " << i + 1 << " 个数处理后变为: " << arr[i] << endl;
}
  return 0;
}
//统计数组奇数个数（指针遍历）
#include<iostream>
using namespace std;
int countOdd(int *p,int n)
{
  int count=0;
  for(int i=0;i<n;i++)
  {if(!(*p)%2==0)
  {
    count ++;
  }
  //p++;
  }
  return count;
}
int main()
{
  int n;
  cout<<"Please enter the number: ";
  cin>>n;
  int count;
  int num[100];
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  int result= countOdd(num,n);
  cout<<result<<endl;
  return 0;
}
//反转数组（指针交换）
#include<iostream>
using namespace std;
void swapNum(int*p,int n)
{
  int temp=0;
  int *p_left=p;
  int *p_right=p+(n-1);
  while(p_left<p_right)
  {
    int temp= *p_left;
   *p_left= *p_right;
   *p_right=temp;
   p_left++;
   p_right--;
  }
}
int main()
{
  int num[100];
  int n;
  cout<<"Please enter the number: ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
    swapNum(num,n);
  cout << "反转后的数组为: ";
for (int i = 0; i < n; i++) {
    // 这里我们要打印数组的第 i 个元素
    cout << num[i] << " "; 
}
cout << endl;
return 0；
}