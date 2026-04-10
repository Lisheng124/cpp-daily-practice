查找最大值和最小值
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
  //vector<int>n;用来存储
  int n;
  cout<<"How many number:";
  cin>>n;
  
  cout<<"Please enter the number:"<<endl;
  vector<int>num(n);
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  
  int max=INT_MIN;
  int min=INT_MAX;
  for(int i=0;i<n;i++)
  {
    if(num[i]>max)
    {
      max=num[i];
    }
    if(num[i]<min)
    {
      min=num[i];
    }
  }
  cout<<"Max value:"<<max<<endl;
  cout<<"Min value:"<<min<<endl;
  
  return 0;
}
排序 + 找第二三大
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
  int n;
  cout<<"How many number:";
  cin>>n;
  
  cout<<"Please enter the number:"<<endl;
  vector<int>num(n);
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  
  int first=num[0];
  int second =num[0];
  int third =num[0];
  for(int i=0;i<n;i++)
  {
    if(num[i]>first)
    {
      third=second;
      second=first;
      first=num[i]; 
    }
    else if(num[i]>second&&num[i]<first)
    {
      second=num[i];
    }
    else if(num[i]>third&&num[i]<second)
    {
      third=num[i];
    }
  }
  cout<<"First runner-up:"<<second<<endl;
  cout<<"Second runner-up:"<<third;
  return 0;
}
查找指定元素
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
  int n;
  cout<<"How many number:";
  cin>>n;
  
  cout<<"Please enter the number:"<<endl;
  vector<int>num(n);
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  
  int target;
  cout<<"Please enter your target number:"<<endl;
  cin>>target;
  vector<int>t;
  
  bool found =false;//先假设没找到
  int position =-1;//用来记录找到的位置
  
  for(int i=0;i<n;i++)
  {
    if(num[i]==target)
    {
      found =true;
      position =i;
      break;
      cout<<"Find the target number at position "<<i;
    }
  }
    if (found) 
    {
    cout << "Found target at index: " << position << endl;
    }
else 
{
    cout << "Target not found." << endl;
}
  return 0;
}

6️⃣ 找所有重复元素
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
  int n;
  cout<<"How many number:";
  cin>>n;
  
  cout<<"Please enter the number:"<<endl;
  vector<int>num(n);
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  //排序
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-1-i;j++)
    {
      if (num[j]>num[j+1])
      {
        swap(num[j],num[j+1]);
      }
    }
  }
  cout<<"Arrange order:"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<num[i]<<" ";
  } 
  
  cout<<endl;
  cout<<"Duplicate number1:"<<endl;
   for(int i=0;i<n;i++)
  {
    if(num[i]==num[i-1]&&(i==1||num[i]!=num[i-2]))
{
    cout<<num[i]<<" ";
}
  } 
  cout<<endl;
  cout<<"Duplicate number2:"<<endl;
  for (int i = 0; i < n - 1; i++) {
    if (num[i] == num[i + 1]) 
    {
    if (i == 0 || num[i] != num[i - 1]) 
        {
            cout << num[i] << " ";
        }
    }
}
  
  return 0;
}

版本 A：向前看（使用 i + 1）🔍
// 注意：循环终点是 n - 1，防止 num[i+1] 越界
for (int i = 0; i < n - 1; i++) {
    // 发现我和后一个一样
    if (num[i] == num[i + 1]) {
        // 关键逻辑：只有当我后面没有更多重复时（或者我是这串重复的第一个）才打印
        // 或者简单判断：如果我是第一个元素，或者我跟前一个不一样
        if (i == 0 || num[i] != num[i - 1]) {
            cout << num[i] << " ";
        }
    }
}
版本 B：回头看（使用 i - 2）🔙
// 注意：循环起点是 1，防止 num[i-1] 越界
for (int i = 1; i < n; i++) {
    // 发现我和前一个一样
    if (num[i] == num[i - 1]) {
        // 关键逻辑：如果 i=1（前两个就重复），或者我和“前前个”不一样
        // 这样能保证 5, 5, 5 只在遇到第二个 5 时打印一次
        if (i == 1 || num[i] != num[i - 2]) {
            cout << num[i] << " ";
        }
    }
}


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
  int n;
  cout<<"How many number:";
  cin>>n;
  
  cout<<"Please enter the number:"<<endl;
  vector<int>num(n);
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  
  int target;
  cout<<"Please enter the target number"<<endl;
  cin>>target;

  vector<int> result; // 用来存放过滤后的数字
for(int i = 0; i < n; i++) {
    if (num[i] != target) { 
        result.push_back(num[i]); 
    }
}
  
  for(int i=0;i<result.size();i++)
  {
    cout<<result[i]<<" ";
  }
  return 0;
}
*/
//vector统计-平均数&大于平均数
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
  double n;
  cout<<"How many number:";
  cin>>n;
  
  cout<<"Please enter the number:"<<endl;
  vector<int>num(n);
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  
  double sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=num[i];
  }
  double avg=sum/n;
  cout<<"Average is "<<avg<<endl;
cout << "More than average:" << endl;
for(int i = 0; i < n; i++) {
    if (num[i] > avg) { 
        cout << num[i] << " ";
    }
}
vector<int> result; 
for (int i = 0; i < n; i++) {
    if (num[i] > avg) {
       result.push_back(num[i]);
    }
}

for(int i = 0; i < result.size(); i++) {
    // 为了防止 j+1 越界，j 应该小于什么？
    for(int j = 0; j < result.size() - 1; j++) { 
        if(result[j] > result[j+1]) {
            swap(result[j], result[j+1]);
        }
    }
}
cout << "More than average (sorted): " << endl;
for(int i = 0; i < result.size(); i++) { // 终点是新数组的大小
    cout << result[i] << " ";
}
 /*for(int i=0;i<result.size();i++)
  {
    for(int j=0;j<result.size();j++)
    {
      if(num[j]>num[j+1])
      {
        swap(num[j],num[j+1]);
      }
    }
  }
  
  for(int i=0;i<n;i++)
  */
  return 0;
}