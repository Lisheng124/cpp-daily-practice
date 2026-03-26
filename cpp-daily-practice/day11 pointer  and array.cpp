*#include <iostream>
#include <string>
using namespace std;
struct Student
{
  string name;
  double score;
  int age;
};
int main()
{
  Student s1;
  cout<<"Please enter the student name: ";
  cin>>s1.name;
  cout<<"Please enter the student score: ";
  cin>>s1.score;
  cout<<"Please enter the student age: ";
  cin>>s1.age;
  cout<<"Student name is: "<<s1.name<<endl;
  cout<<"Student score is: "<<s1.score<<endl;
  cout<<"Student age is: "<<s1.age;

 return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    double score;
};

int main() {
    Student s[5];

    // 1. You need to actually input data first!
    for(int i = 0; i < 5; i++) {
        cout << "Enter score for student " << i + 1 << ": ";
        cin >> s[i].score;
    }

    // 2. Initialize max/min with the first student's SCORE
    double maxval = s[0].score;
    double minval = s[0].score;
    double sum = 0;

    for(int i = 0; i < 5; i++) {
        // Compare the SCORE member, not the whole struct
        if(s[i].score > maxval) {
            maxval = s[i].score;
        }
        if(s[i].score < minval) {
            minval = s[i].score;
        }
        sum += s[i].score;
    }

    double average = sum / 5;

    cout << "Max: " << maxval << endl;
    cout << "Min: " << minval << endl;
    cout << "Avg: " << average << endl;

    return 0;
}
Student*p 指的是学生的地址


#include<iostream>
#include<string>
using namespace std;
struct Student
{
  string name;
  double score;
};
int main()
{
  Student s;//定义一个student s的变量
  Student* p=&s;
  s.name="Zhangsan";
  //p->name="Zhangsan";
  p->score=95.5;
  cout << "Name: " << s.name << endl;
  cout << "Score: " << p->score << endl;
  return 0;
}
#include<iostream>
#include<string>
using namespace std;
struct Student
{
  string name;
  double score;
};

void printStudent(Student* p)
{
  (*p).name="nls";
}
void updateScore(Student* p, int x)
{
  p->name="nls_updated";
  p->score=55.55;
}
int main()
{
  Student s;
  int x;
  Student*p =&s;
  printStudent(&s);
  cout<<s.name<<endl;
  updateScore(&s,x);
  cout<<s.name<<" "<<s.score<<endl;
  return 0;
}

#include<iostream>
#include<string>
using namespace std;
struct Student
{
  string name;
  double score;
};
void Studetails(Student *p,int x)
{
  (*p).name="nls";
  (*p).score=88;
}
int main()
{
  Student s;
  Student *p=&s;
  int x;
  Studetails(&s,x);
  p->score=95;
  cout<<s.name<<" "<<s.score<<endl;
  return 0;
}*/

#include<iostream>
#include<string>
using namespace std;
struct Student
{
  string name;
  double score;
};

void Studentscore(Student *p)
{
  if((*p).score>=100)return ;
  if((*p).score<60){(*p).score+=10;}
  else if((*p).score>=60){(*p).score+=5;}
  if((*p).score>=100){(*p).score =100;}
}
int main()
{
  Student s[4];
  Student *p=s;
cout << "Please enter scores for 4 students:" << endl;
for(int i=0;i<4;i++)
  {
    cout << "Student " << i + 1 << ": ";
    //cin>>s[i].score;
    cin>>(p+i)->score;//进阶
  }
   for(int i=0;i<4;i++)
  {
   Studentscore(p + i);  
  }
  //cout<<"Score before adding: "<<s.score<<endl;
  cout<<"Score after adding: "<<endl;
  for(int i=0;i<4;i++)
  {
    cout<<"students"<<i+1<<"Final score:"<<s[i].score<<endl;
  }
  return 0;
}
/*#include<iostream>
#include<string>
using namespace std;
struct Student
{
  string name;
  double score;
};
int main()
{
  return 0;
}*/