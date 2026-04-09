/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*//如果你用的是 vector<int> num，写法是：sort(num.begin(), num.end());
vector<int>num(n);
sort(num.begin(),num.end())
//如果你用的是普通数组 int arr[n]，写法是：sort(arr, arr + n);
int arr[n];
sort(arr, arr+n);
for(int i = 1; i < n; i++)
//要注意这边 i一定要从1开始，如果从i=0，就会从arr[0]vsarr[-1]这样就越界了
{
    if(arr[i] == arr[i-1])
        cout << arr[i];
}

#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
int main()
{
  int n;
  cout<<"How many number?"<<endl;
  cin>>n;
  
  int max=INT_MIN;
  int sec=INT_MIN;
  int min=INT_MAX;
  vector<int>num(n);
  cout<<"Please enter the number:"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  
  for(int i=0;i<n;i++)
  {
    if(num[i]>max)
    {
      sec=max;
      max=num[i];
    }
    else if(num[i]>sec&&num[i]!=max)
    {
      sec=num[i];
    }
    if(num[i]<min)
    {
      min=num[i];
    }
  }
   cout<<"1ST:"<<max<<endl;
    cout<<"2ND:"<<sec<<endl;
    cout<<"LAST:"<<min<<endl;
  return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
int main()
{
  int n;
  cout<<"How many number?"<<endl;
  cin>>n;
  
  int max=INT_MIN;
  int sec=INT_MIN;
  int min=INT_MAX;
  vector<int>num(n);
  cout<<"Please enter the number:"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  
  for(int i=0;i<n;i++)
  {
    if(num[i]>max)
    {
      sec=max;
      max=num[i];
    }
    else if(num[i]>sec&&num[i]<max)
    {
      sec=num[i];
    }
    if(num[i]<min)
    {
      min=num[i];
    }
  }
   cout<<"1ST:"<<max<<endl;
    cout<<"2ND:"<<sec<<endl;
    cout<<"LAST:"<<min<<endl;
  return 0;
}

#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
int main()
{
  int n;
  cout<<"How many number?"<<endl;
  cin>>n;
  
  vector<int>num(n);
  cout<<"Please enter the number:"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  
  cout<<"Arrange array:";
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-1-i;j++)
    {
      if(num[j]>num[j+1])
      {
        swap(num[j],num[j+1]);
      }
    }
  }
  for(int arr:num)
  {
    cout<<arr<<" ";
  }
  return 0;
}

//用sort来排序
#include<iostream>
#include<string>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cout<<"How many number?"<<endl;
  cin>>n;
  
  vector<int>num(n);
  cout<<"Please enter the number:"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  
  sort(num.begin(),num.end());
  
  cout<<"Sorted array:";
  for(int x:num)
  {
    cout<<x<<" ";
  }
  
  return 0;
}
*/
//找duplicate num&出现最多的数字
#include<iostream>
#include<string>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cout<<"How many number?"<<endl;
  cin>>n;
  
  vector<int>num(n);
  cout<<"Please enter the number:"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  
  sort(num.begin(),num.end());
  //用sort来排序
  cout<<"Sorted array:";
  for(int x:num)
  {
    cout<<x<<" ";
  }
  cout<<endl;
  //找重复的数字
  cout<<"Duplicate number:";
  for (int i = 1; i < num.size(); i++)
{
    if (num[i] == num[i-1] && num[i] != num[i-2] ) 
    // 这里的逻辑是：我和左边相等，但左边那个数和它自己的左边不等
    {
        cout << num[i] << " ";
    }
}
//找出现最多的数字
int Count=1;
int maxCount=0;
int mostFrequent =num[0];

  for(int i=1;i<n;i++)
  {
    if(num[i]==num[i-1])
    {
      Count++;
    }
    else
    {
      if(Count>maxCount)
      {
        maxCount=Count;
        mostFrequent = num[i-1];
      }
      Count=1;
    }
  }
  if(Count > maxCount) {
    maxCount = Count;
    mostFrequent = num[n-1]; // 或者是 num[i-1]
}
cout<<endl<<"Most Frequent Number:"<<mostFrequent;
  return 0;
}

写一个程序：
功能：
输入 n
存入 vector
排序
输出：
最大值
第二大
所有重复元素
去重后的数组

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
using namespace std;
struct Student
{
  string name;
  int score;
};

// 我们传入 Student 类型的容器，并传出两个 Student 对象
void getTopStudents(vector<Student>& s, Student &first, Student &second) {
    // 初始化：分数设为最小值
    first.score = INT_MIN;
    second.score = INT_MIN;
    
    for (int i = 0; i < s.size(); i++) {
        // 这里的逻辑和你之前写的一样，只是操作的对象变成了 .score
        if (s[i].score > first.score) {
            second = first;            // 亚军更新为旧冠军
            first = s[i];       // 冠军更新为当前学生
        } 
        else if (s[i].score > second.score && s[i].score < first.score) {
            second = s[i];      // 亚军更新为当前学生
        }
    }
}


/*void getFirstSecondScore(int &first,int &second,vector<int>&num,int&n)
{
  first=INT_MIN;
  second=INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(num[i]>first)
    {
      second=first;
      first=num[i];
    }
    else if(num[i]>second&&num[i]<first)
    {
      second=num[i]
    }
  }
}