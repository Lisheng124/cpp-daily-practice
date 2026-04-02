/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
  int arr[10];
  int n;
  cout << "How many numbers (max 10): ";
    cin >> n;
  cout << "Enter " << n << " numbers: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  for(int i=0;i<n-1;i++)
  //有n个数字，n-1数字排好，最后一个号码肯定就在正确的位置上
  {
    for(int j=0;j<n-1-i;j++)
    //每一论从第一个开始，随着每一轮结束最大或者最小的号码肯定在最后了，没必要循环多一次浪费时间
    {
      if(arr[j]>arr[j+1])
      //如果最左边比最右边大
      {
        int temp=arr[j];
        //先把最左边的数字存起来
        arr[j]=arr[j+1];
        //然后交换位置左换右
        arr[j+1]=temp;
        //右换左
      }
    }
  }
  cout << "The ascending order is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
  return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
  int n;
  cout<<"How many numbers(∞)";
  cin>>n;
  //int arr[];
  vector<int>arr(n);//vector的数组不需要再加[]
  //指定大小为 n，这样 arr[i] 才有空间存放数据
  cout << "Enter " << n << " numbers: " << endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-1-i;j++)
    {
      if(arr[j]<arr[j+1])
      {
      int temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
      }
    }
  }
   cout << "The descending order is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
  int n;
  cout<<"How many numbers(∞):";
  cin>>n;
  vector<int>v(n);
 cout << "Please enter " << n << " numbers:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> v[i]; 
    }  for(int i=0;i<v.size()-1;i++)
  {
    for(int j=0;j<v.size()-1-i;j++)
    if(v[j]>v[j+1])
    {
      swap(v[j],v[j+1]);//比存在temp里面高效且实用
    }
  }
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  return 0;
}

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
  int n;
  cout<<"How many numbers(∞):";
  cin>>n;
  vector<int>v(n);
  cout << "Please enter " << n << " numbers:" << endl;
  for(size_t i = 0; i < v.size(); i++) 
  {
    cin>>v[i];
  }
  for(size_t i=0;i<v.size();i++)//用size_t的话返回的类型永远是正数
  //专门用来算数，表示长度或索引的
  //仅适合用于i++，i--很危险
  {
  if(v[i]%2!=0)continue;
  //从左往右走，找偶数。奇数，直接跳过(continue)
    for(size_t j=i+1;j<v.size();j++)
    {
      //因为确定了i位置就是偶数位，j就直接从i后面一个位置开始跑，
      if(v[j]%2==0)
      //j也会遇到偶数，但是他会通过上面的if语句直接跳舞奇数
      {
        if(v[i]>v[j])
        //如果前面的偶数 v[i]比后面的偶数v[j]大就交换它们。
        {
          swap(v[i],v[j]);
        }
      }
    }
  }
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  return 0;
}

#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Student
{
  string name;
  int age;
  int score;
};
int main()
{
  int n;
  cout<<"How many students:";
  cin>>n;
  vector<Student>students(n);
  for (size_t i = 0; i < students.size(); i++) 
  {
        cout << "--- Enter info for Student #" << i + 1 << " ---" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Age: ";
        cin >> students[i].age;
        cout << "Score: ";
        cin >> students[i].score;
    }
  for(size_t i = 0;i<students.size()-1;i++)
  {
    for(size_t j = 0;j<students.size()-1-i;j++)
    {
      if(students[j].score<students[j+1].score)
      {
        swap(students[j],students[j+1]);
      }
    }
  }
    for(size_t i = 0;i<students.size();i++)
{
  cout<<"NO"<<i+1<<"Name:"<<students[i].name<<"Age"<<students[i].age<<"Score:"<<students[i].score;
  cout<<endl;
}
  return 0;
}
按规则排序：
分数高的在前
如果分数一样 → 名字字典序小的在前

#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Student
{
  string name;
  int age;
  int score;
};
int main()
{
  int n;
  cout<<"How many students:";
  cin>>n;
  vector<Student>students(n);
  for (size_t i = 0; i < students.size(); i++) 
  {
        cout << "--- Enter info for Student #" << i + 1 << " ---" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Age: ";
        cin >> students[i].age;
        cout << "Score: ";
        cin >> students[i].score;
    }
  for(size_t i = 0;i<students.size()-1;i++)
  {
    for(size_t j = 0;j<students.size()-1-i;j++)
    {
      if(students[j].score>students[j+1].score)
      {
        swap(students[j],students[j+1]);
      }
  else if (students[j].score == students[j + 1].score) 
  {
    if (students[j].name > students[j + 1].name) 
    {
        swap(students[j], students[j + 1]);
    }
  }
    }
  }
    for (size_t i = 0; i < students.size(); i++) 
    {
        cout << i + 1 << "\t" 
             << students[i].name << "\t" 
             << students[i].age << "\t" 
             << students[i].score << endl;
    }
  return 0;
}

//排序后输出最大和最小
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
  int n;
  cout<<"How many numbers:";
  cin>>n;
  vector<int>x(n);
  cout<<"Please enter the number:";
  for(size_t i=0;i<x.size();i++)
  {
    cin>>x[i];
  }
  for(size_t i=0;i<x.size()-1;i++)
  {
      for(size_t j=0;j<x.size()-1-i;j++)
      {
        if(x[j]>x[j+1])
        {
          swap(x[j],x[j+1]);
        }
      }
  }
  for(size_t i=0;i<x.size();i++)
  {
    cout<<x[i]<<" ";
  }
  cout<<"Min:"<<x[0]<<" "<<"Max:"<<x[n-1];
  return 0;
}

//排序后找中位数
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
  int n;
  cout<<"How many numbers:";
  cin>>n;
  vector<int>x(n);
  cout<<"Please enter the number:";
  for(size_t i=0;i<x.size();i++)
  {
    cin>>x[i];
  }
  for(size_t i=0;i<x.size()-1;i++)
  {
      for(size_t j=0;j<x.size()-1-i;j++)
      {
        if(x[j]>x[j+1])
        {
          swap(x[j],x[j+1]);
        }
      }
  }
  for(size_t i=0;i<x.size();i++)
  {
    cout<<x[i]<<" ";
  }
  if (n % 2 != 0) {
    // 情况 A：奇数个，直接取最中间的
    double median = x[n / 2];
    cout << "Median: " << median << endl;
} 
else {
    // 情况 B：偶数个，取中间两个的平均值
    // 注意：要除以 2.0 才能得到小数结果
    double median = (x[n / 2 - 1] + x[n / 2]) / 2.0;
    cout << "Median: " << median << endl;
}
  return 0;
}

//struct排序（多条件）
//分数降序 + 名字升序
#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Student
{
  string name;
  int score;
};
int main()
{
  int n;
  cout<<"How many students:";
  cin>>n;
  vector<Student>students(n);
  cout<<"Please enter the students details:";
  for(size_t i=0;i<students.size();i++)
  {
    cin>>students[i].name>>students[i].score;
  }
  for(size_t i=0;i<students.size()-1;i++)
  {
  for(size_t j=0;j<students.size()-1-i;j++)
  {
    if(students[j].score<students[j+1].score)
    //第一优先级：从大到小
    {
      swap(students[j],students[j+1]);
    }
    //第二优先级：只有分数一样的时候，才比较名字
    else if(students[j].score==students[j+1].score)
    {
      //名字升序
      if(students[j].name>students[j+1].name)
      {
              swap(students[j],students[j+1]);

      }
    }
  }
  }
  for(size_t i=0;i<students.size();i++)
  {
    cout<<"Descending order of score:"<<students[i].score;
    cout<<"Ascending order of name:"<<students[i].name;
  }
  return 0;
}

//vector部分排序（
#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    int n;
    cout << "How many students: ";
    cin >> n;

    vector<Student> s(n);
    cout << "Please enter Name and Score:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> s[i].name >> s[i].score;
    }

    // --- 局部冒泡排序 ---
    // 目标：通过 n/2 轮交换，把全场最小的几个数“运”到最前面
    for (size_t i = 0; i < s.size() / 2; i++) { 
        // 从数组末尾开始往前比，像气泡一样把小的往 i 的位置推
        for (size_t j = s.size() - 1; j > i; j--) {
            if (s[j].score < s[j - 1].score) {
                swap(s[j], s[j - 1]);
            }
        }
    }

    cout << "\nResult (First " << s.size()/2 << " positions are sorted):" << endl;
    for (size_t i = 0; i < s.size(); i++) {
        // 修正点：结构体不能直接打印，需要访问成员
        cout << s[i].name << ":" << s[i].score << "  ";
    }
    cout << endl;

    return 0;
}

写一个程序：
功能：
输入 n 个学生
存入 vector
按成绩排序（降序）
输出前3名
输出平均分
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm> // 建议包含，虽然你手写了排序

using namespace std;

struct Student {
    string name;
    int score; // 修正：必须有成绩才能排序
};

int main() {
    int n;
    cout << "How many students: ";
    cin >> n;

    if (n <= 0) return 0;

    vector<Student> s(n);
    cout << "--- Students details ---" << endl;
    cout << "Please enter the Name and Score:" << endl;

    for (size_t i = 0; i < s.size(); i++) {
        // 修正：必须加上 [i] 才能访问具体的学生
        cin >> s[i].name >> s[i].score;
    }

    // --- 1. 冒泡排序（降序：分数高的在前） ---
    for (size_t i = 0; i < s.size() - 1; i++) {
        for (size_t j = 0; j < s.size() - 1 - i; j++) {
            if (s[j].score < s[j + 1].score) { // 如果前面的比后面的小，就交换
                swap(s[j], s[j + 1]);
            }
        }
    }

    // --- 2. 计算平均分 ---
    double sum = 0; // 用 double 存储总分，方便后面算小数
    for (size_t i = 0; i < s.size(); i++) {
        sum += s[i].score;
    }
    double avg = sum / n;

    // --- 3. 输出前三名 ---
    cout << "\n--- Top 3 Students ---" << endl;
    // 使用 min(n, 3) 是为了防止总人数少于3人时程序出错
    int topCount = (n < 3) ? n : 3; 
    for (int i = 0; i < topCount; i++) {
        cout << "No." << i + 1 << ": " << s[i].name << " (Score: " << s[i].score << ")" << endl;
    }

    // --- 4. 输出平均分 ---
    cout << "\nAverage Score: " << avg << endl;

    return 0;
}