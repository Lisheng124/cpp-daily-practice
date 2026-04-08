//线性查找=一个一个看过去
/*时间复杂O(n)
找最大值 + 最小值
for (数据类型 变量名 : 容器名) 
{
    // 使用 变量名 进行操作
}
vector<>xx()
如果要用 下标赋值（如 arr[i] = ...），初始化时需要写 (n)。知道的情况下用
如果要用 自动追加（如 push_back()），初始化时不能写 (n)，应该让它从空开始。不知到的情况下用
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
  return 0;
}

#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
struct Student
{
  string name;
  int score;
};
void findMaxMin(vector<Student>& list, int& maxVal, int& minVal) 
{
  //maxval=list[0].score;
  maxVal=INT_MIN;
  minVal=INT_MAX;//要用<climits>
  for(size_t i=0;i<list.size();i++)
  {
    if(list[i].score>maxVal)
    {
      maxVal=list[i].score;
    }
    if(list[i].score<minVal)
    {
      minVal=list[i].score;
    }
  }
}
int main()
{
  int n;
  cout<<"How many students?";
  cin>>n;
  vector<Student>s(n);
  cout<<"Please enter the name and the score"<<endl;
  for(size_t i=0;i<n;i++)
  {
    cin>>s[i].name>>s[i].score;
  }
 int maxScore,minScore;
 findMaxMin(s,maxScore,minScore);
cout << "Max Score: " << maxScore << endl;
    cout << "Min Score: " << minScore << endl;  
    return 0;
}
找：
最大值
第二大值（不排序）
#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

struct Student {
    string name;
    int score;
};

// 使用 & 确保修改能传回 main，const 确保不会意外修改输入列表
void getFirstSecondScore(const vector<Student>& list, int& firstScore, int& secondScore, string& firstName, string& secondName) {
    // 1. 初始化：最高分设为极小，确保任何分数都能更新它
    firstScore = INT_MIN;
    secondScore = INT_MIN;

    for (size_t i = 0; i < list.size(); i++) {
        if (list[i].score > firstScore) {
            // 2. 发现新的第一名：先把旧的第一名降级为第二名
            secondScore = firstScore;
            secondName = firstName;

            // 3. 更新新的第一名信息
            firstScore = list[i].score;
            firstName = list[i].name;
        } 
        else if (list[i].score > secondScore) {
            // 4. 没超过第一名，但超过了当前的第二名
            secondScore = list[i].score;
            secondName = list[i].name;
        }
    }
}
int main()
{
  int n;
  cout<<"How many students?";
  cout<<endl;
  cin>>n;
  
  vector<Student>s(n);
  for(int i=0;i<n;i++)
  {
    cout<<"Students name and score:"<<endl;
    cin>>s[i].name>>s[i].score;
  }
  
  int fScore, sScore;
  string fName, sName; 
  
getFirstSecondScore(s, fScore, sScore, fName, sName);

cout << "\n--- Results ---" << endl;
    cout << "1st Place: " << fName << " with " << fScore << " points" << endl;
    cout << "2nd Place: " << sName << " with " << sScore << " points" << endl;return 0;
}

//查找制定元素
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
  int n;
  cout<<"HOW MANY STUDENTS";
  cin>>n;
  int arr[100];
  int pos=-1;//表示还没找到之前，先定义一个
  //pos==position
  for(int i=0;i<n;i++)
  {
  cin>>arr[i];
  }
  int target =5;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==target)
    {
      pos=i;
      break;
    }
  }
  cout<<pos;
  return 0;
}

//找所有出现的位置（不能 break）
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
  int n;
  cout<<"How many numbers?"<<endl;
  cin>>n;
  
  vector<int>arr(n);
  cout<<"Please enter the number:";
  for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
  int target;
  cout<<"Please enter the target number:"<<endl;
  cin>>target;
  vector<int>position;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==target)
    {
      position.push_back(i);
    }
  }
  
  if(position.empty())
  {
    cout<<"Target not found."<<endl;
  }
  else
  {
    cout<<"Target found at indexes: ";
    for(int p:position)
    {
      cout<<"Index:"<<p<<" ";
      cout<<"No:"<<p+1<<" ";
    }
    cout<<endl;
  }
  return 0;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 1. 函数定义在 main 之外，方便复用
// arr 是我们要找的“抽屉”，target 是我们要找的“目标”
vector<int> findAllPositions(const vector<int>& arr, int target) {
    vector<int> results; // 创建一个空的动态口袋

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            results.push_back(i); // 找到目标，把下标 i 存入口袋 📥
        }
    }
    return results; // 返回装满下标的口袋
}

int main() {
    int n;
    cout << "How many numbers?" << endl;
    cin >> n;

    vector<int> arr(n); // 预留 n 个位置
    cout << "Please enter the numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Please enter the target number:" << endl;
    cin >> target;

    // 2. 调用我们写好的函数
    vector<int> position = findAllPositions(arr, target);

    // 3. 根据结果进行输出
    if (position.empty()) {
        cout << "Target not found." << endl;
    } else {
        cout << "Target found!" << endl;
        for (int p : position) {
            cout << "Index: " << p << " (No: " << p + 1 << ")" << endl;
        }
    }

    return 0;
}
*/
//删除元素（进阶）
//删除所有等于 target 的数
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
  int n;
  cout<<"How many numbers?"<<endl;
  cin>>n;
  
  vector<int>arr(n);
  cout<<"Please enter the number:";
  for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
  int target;
  cout<<"Please enter the target number:"<<endl;
  cin>>target;
  vector<int>position;
  for(int i=0;i<n;i++)
  {
    if(arr[i]!=target)
    {
      position.push_back(i);
    }
  }
  
  if(position.empty())
  {
    cout<<"Target not found."<<endl;
  }
  else
  {
    cout<<"Target found at indexes: ";
    for(int p:position)
    {
      cout<<"Index:"<<p<<" ";
      cout<<"No:"<<p+1<<" ";
    }
    cout<<endl;
  }
  return 0;
}