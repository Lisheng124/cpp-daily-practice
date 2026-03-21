/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//题1：定义结构体
/*#include<iostream>
using namespace std;
struct Student
{
    string name;
    double score;
};
int main()
{
    Student s1;
    cout<<"Please enter the name：";
    cin>>s1.name;
    cout<<"Please enter the score：";
    cin>>s1.score;
   cout << "Name: " << s1.name<<endl<< "Score: " << s1.score << endl;    
   return 0;
}

//题2：结构体数组
//定义： Student s[3]; 输入3个学生信息，全部输出。
#include <iostream>
using namespace std;
struct Student
{
    string name;
    double height,weight;
};

int main()
{
    Student s[3];
    for(int i=0;i<3;i++)
    {
    cin>>s[i].name>>s[i].weight>>s[i].height;
    }
    for(int i=0;i<3;i++)
    {
    cout<<"Name: "<<s[i].name<<"\n";
    cout<<"Weight: "<<s[i].weight<<"kg"<<"\n";
    cout<<"Height: "<<s[i].height<<"cm"<<endl;
    }
    return 0;
}
//这个是输入三个打印三个//先输入 后打印
#include <iostream>
using namespace std;
struct Student
{
    string name;
    double height,weight;
};

int main()
{
    Student s[3];
    for(int i=0;i<3;i++)
    {
    cin>>s[i].name>>s[i].weight>>s[i].height;
    cout<<"Name: "<<s[i].name<<"\n";
    cout<<"Weight: "<<s[i].weight<<"kg"<<"\n";
    cout<<"Height: "<<s[i].height<<"cm"<<endl;
    }
    return 0;
}
//这个是 输入一个打印一个

#include<iostream>
using namespace std;
struct Student
{
    string name;
    double score;
};
int main()
{
    Student s[100];
    double maxScore=s[0].score;
    string topName = s[0].name;
    if(maxScore<=0){return 0;}
    for(int i=0;i<3;i++)
    {
        cin>>s[i].name>>s[i].score;
    }
    for(int i=0;i<3;i++)
    {
        if(s[i].score>maxScore)
        {
            maxScore=s[i].score;
            topName=s[i].name;
        }
    }
    cout<<"Top student: "<<topName<<" "<<maxScore;
    return 0;
}

题4：计算平均分
#include<iostream>
using namespace std;
struct Student
{
    string name;
    double score;
};

float getAverage(Student s[], int n)
{ 
    double sum=0;
  for(int i=0;i<n;i++)
  {
      sum += s[i].score;
  }
  return sum/n;
}
int main()
{
    Student s[100];
    int n;
    cout<<"Please enter the number of student: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
            cout<<"Please enter the score of student: ";
        cin>>s[i].score;
    }
    double avg=getAverage(s,n);
    //for(int i=0;i<n;i++)//这样会连续打印出avg的结果
    //{
        cout<<"The average score is: "<<avg<<endl;
    //}
    return 0;
}

//题5：统计及格人数
#include<iostream>
using namespace std;
struct Student
{
    string name;
    double score;
};
//struct Myclass
//{
   // Student s[100]
   // int n;
//}；
//会添加难度 之后再学

int countPass(Student s[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
      if(s[i].score>=60)
      {
          count++;
      }
    }
    return count;
}
int main()
{
    int n;
    Student s[100];
    cout<<"Please enter the number of students: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
            cout<<"Please enter the score of students: ";
        cin>>s[i].score;
    }
    int count=countPass(s,n);
    cout<<"Pass: "<<count<<endl;
    return 0;
}*/

//小程序（今天最重要）
//学生管理系统（基础版）
#include <iostream>
using namespace std;
struct Student
{
    string name;
    double score;
};
float getAverage(Student s[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum +=s[i].score;
    }
    return sum/n;
}
int countPass(Student s[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i].score>=60)
        {
            count++;
        }
    }
    return count;
}
int topStudent(Student s[],int n)
{
    double maxval=s[0].score;
    //string topName=s[0].name;
    int index=0;
        for(int i=0;i<n;i++)
        {
            if(s[i].score>maxval)
            {
                maxval=s[i].score;
                index = i;
            }
        }
return index;
}
int main()
{
Student s[100];
int n;
cout<<"Please enter the number of students: ";
cin>>n;
for(int i=0;i<n;i++)
{
    cout<<"Please enter the name of students: ";
    cin>>s[i].name;
    cout<<"Please enter the score of students: ";
    cin>>s[i].score;
}
  float avg=getAverage(s,n);
  int pass=countPass(s,n);
  int topIdx=topStudent(s,n);
  cout << "The highest score student is: " << s[topIdx].name << endl;
  cout<<"Score: "<<s[topIdx].score<<endl;
    cout<<"The average score is: "<<avg<<endl;
    cout<<"The number of pass student is: "<<pass<<endl;
    return 0;
}



