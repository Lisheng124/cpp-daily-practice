/*知识点：
new//申请一个格子
new int//向电脑要一个int的格子
new int[5]//向电脑要一个能装下五个数组的int
delete//有借有还
delete p//删除单个变量
//如果有两个单变量
//int *p1=new int();int *p2=new string("")
//delete p1;delete p2;->p1=nullptr;p2=nullptr;释放后将指针置空，防止野指针
delete[] p//删除数组
输入你分配//
int n；
cin>>n;
int *p =new int[n]
//先输入后准备，因为int n是新定义的，没cin里面就是随机号码 然后可能就会准备太多int
*/

//1)创建一个动态变量，输入一个数，输出它
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
  int *p=new int(10);
  cout<<*p;
  return 0;
}
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int *p=new int;//有借
  cout<<"Please enter a number: ";
  cin>>*p;
  cout<<"The value of the dynamic variable you entered: "<<*p<<endl;
  delete p;//有换
  p=nullptr;//好习惯
  return 0;
}
//2)创建一个动态数组，存 5 个数，输出最大值
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int *p=new int[5];
  int maxval=p[0];
  cout<<"Please enter the number: ";
  for(int i=0;i<5;i++)
  {
  //cin>>*p;//*p始终指向p[0]
  cin>>p[i];
  }
  for(int i=0;i<5;i++)
  {
    cout<<"NO "<<(i+1)<<" number is: "<<p[i]<<endl;
    if(p[i]>maxval)
  {
    maxval=p[i];
  }
  }
    cout<<"The biggest number: "<<maxval;
  delete[] p;
  p=nullptr;
  return 0;
}

//3)输入 n，创建数组，输入 n 个数，输出它们
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n;
  int *p=new int[n];
  cout<<"Please enter the number of n:";
  cin>>n;
  cout<<"Please enter the value of n: ";
  for(int i=0;i<n;i++)
  {
  cin>>p[i];
  }
  cout<<"The number is: ";
  for(int i=0;i<n;i++)
  {
  cout<<p[i]<<" ";
  }
  delete[] p;
  p=nullptr;
  return 0;
}

//4)动态数组反转（用指针）
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n;
  cout<<"Please enter the number of n:";
  cin>>n;
  int *p=new int[n];
  int temp;
  cout<<"Please enter the value of n: ";
  for(int i=0;i<n;i++)
  {
  cin>>p[i];
  }
  int *left=p;
  int *right=p+n-1;
    while(left<right){
    int temp=*left;
    *left=*right;
    *right=temp;
    //交换之后， 指针需要移动，不然一直在原地
    left++;//向右移动
    right--;//向左移动
    }
    cout<<"The reverse number is: ";
    for(int i=0;i<n;i++)
    {
      cout<<p[i]<<" ";
      //为什么不是打印temp，是因为temp是临时中转站，p[i]才是管理员
    }

  delete[] p;
  p=nullptr;
  return 0;
}
//5)输入 n，求平均值
#include <iostream>
#include <string>
using namespace std;
int main()
{
  double sum=0;
  double average;
  int n;
  cout<<"Please enter the number of n:";
  cin>>n;
  int *p=new int[n];
  cout<<"Please enter the value of n: ";
  for(int i=0;i<n;i++)
  {
  cin>>p[i];
  }
  cout<<"The number is: ";
  for(int i=0;i<n;i++)
  {
  sum+=p[i];
  cout<<p[i]<<" ";
  }
  cout<<endl;
  average=sum/n;
  cout<<"The average number is: "<<average;
  delete[] p;
  p=nullptr;
  return 0;
}
//6)输入 n，找第 k 大元素
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n;
  cout<<"Please enter the number of n:";
  cin>>n;
  int *p=new int[n];
  cout<<"Please enter the value of n: ";
  for(int i=0;i<n;i++)
  {
  cin>>p[i];
  }
  int k;
  cout << "What is the largest number you want to find？"<<endl;
  cin>> k;
  for(int i=0;i<n-1;i++)//如果我现在输入的n是5，i<4
  {
    for(int j=0;j<n-1-i;j++)//n=5,i=4,j=3
    {
      if(p[j]<p[j+1])//p[0]<p[1],然后存储p[1]，现在在循环里 所以会从p[0]直到走完
      {
        int temp=p[j];
        p[j]=p[j+1];
        p[j+1]=temp;
      }
    }
  }
  cout << "No " << k << " largest is: " << p[k-1];
  delete[] p;
  p=nullptr;
  return 0;
}*/
//7)删除数组中的某个值（原地）
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "请输入数组的大小 n: ";
    cin >> n;

    int *p = new int[n];
    cout << "请输入 " << n << " 个整数: ";
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int val;
    cout << "请输入你想删除的数字: ";
    cin >> val;

    // --- 原地删除逻辑 (快慢指针) ---
    int slow = 0; // 慢指针：指向下一个“好孩子”该坐的位置
    for (int fast = 0; fast < n; fast++) {
        // 如果快指针看到的不是要删除的坏蛋
        if (p[fast] != val) {
            p[slow] = p[fast]; // 把好孩子搬到慢指针的位置
            slow++;            // 慢指针往后挪一格
        }
    }

    // 此时，slow 的数值就是新数组的有效长度
    cout << "删除后的数组为: ";
    for (int i = 0; i < slow; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    cout << "现在的有效长度是: " << slow << endl;

    delete[] p;
    p = nullptr;
    return 0;
}