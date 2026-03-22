/学生管理系统（最终版）
/*#include<iostream>
#include<string>
using namespace std;
//struct Student s[]//这是在函数写的
struct Student
{
    string name;
    double score;
};
//1.calculate the average
float getAverage(Student s[],int n)
{
    //int sum=0;//double better
    if(n<=0)return 0;//这是一个好习惯
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum +=s[i].score;
    }
    return sum/n;
}
//2.calculate the highest score student's name
int getMaxIndex(Student s[], int n)
{
    int index=0;
    double maxval=s[0].score;
    for(int i=0;i<n;i++)
    //可以用int i=0;(用这个有危险如果出现i=n的时候 循环直接返回index=0)但是更高效
    {
        //if(s[0].score>maxval)
        //已经进入循环不再用[0]了 要用[i]
        if(s[i].score>maxval)
        {
            maxval=s[i].score;
            //index=maxval;
            index = i; // index 记录的是下标（0, 1, 2...），不是分数
        }
    }
    return index;
}
//3.calculate the lowest score student's name
int getMinIndex(Student s[], int n)
{
    int index=0;
    double minval=s[0].score;
    for(int i=0;i<n;i++)
    {
        if(s[i].score<minval)
        {
            minval=s[i].score;
            index=i;
        }
    }
    return index;
}
//4.calculate the number of students who passed
int countPass(Student s[], int n)
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
//5.print all students
void printStudents(Student s[], int n)
{
    //string name;
    cout<<"---Grade list---"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<s[i].name<<"\t"<<s[i].score<<endl;
    }
}

int main()
{
    int n=0;
    cout<<"Please enter the number of students: ";
    cin>>n;
    //int numStudents[100];
    Student students[100];//在structure那边加了类型了
    for(int i=0;i<n;i++)
    {
        cout<<"Please enter the name and score for students "<<i+1<<":";
        cin>>students[i].name>>students[i].score;
    }
    printStudents(students,n);
    double avg=getAverage(students,n);
    cout<<"Average score: "<<avg<<endl;
    //double max=getMaxIndex(students,n);//这边不能用double因为要打印index 只能用int
    //cout<<"Highest score: "<<max<<endl;//这个打印的话 是找到index几
    int max=getMaxIndex(students,n);
    cout<<"Highest score student is: "<<students[max].name<<"("<<students[max].score<<")"<<endl;
    /* int maxIdx = getMaxIndex(students, n);
    // 2. 拿到这个最高分数是多少
    double highest = students[maxIdx].score;

    cout << "Highest score (" << highest << ") students: " << endl;

    // 3. 重新扫一遍数组，谁的分数等于最高分，就打印谁
    for (int i = 0; i < n; i++) {
        if (students[i].score == highest) {
            cout << " - " << students[i].name << endl;
        }
    }
    int min=getMinIndex(students,n);
    cout<<"Lowest score student is: "<<students[min].name<<"("<<students[min].score<<")"<<endl;
    int pass=countPass(students,n);
    cout<<"Students who passed: "<<pass;
    return 0;
}
//students[max]>代表了那个得分最高的整个学生对象 所以我要知道名字跟分数就访问name跟score

//题1：回文数（函数版）Palindromic Numbers//正着读跟反着读是一样的
#include<iostream>
using namespace std;
bool isPalindrome(int n)
{
    //if(n<0)return false;//ex -202 reversed > 202-(不成立)
    if(n < 0||(n % 10 == 0) && n!=0 )return false;//这是直接检查是不是回文 不是回文直接暂停
    int original = n;
    long long reversed =0;
    while(n>0)
    {
        reversed = reversed * 10 + n % 10;//=后面reversed=0
        n/=10;    
    }
    return original == reversed;
}
int main()
{
    int num;
    cout<<"Please try your number: ";
    while(cin>>num)
    {
    bool result = isPalindrome(num);
    if(result)
    {
        cout << num << " is a palindrome number!" << endl;
    } 
    else 
        {
            cout << num << " is NOT a palindrome number." << endl;
        }

        cout << "\nPlease try another number (or any letter to quit): ";
    }
    return 0;
}
   */ 
//题2：最大公约数（GCD）最小公倍数（LCM）
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    while(b!=0)
    {
        int temp =a % b;
        a=b;
        b=temp;
    }
    return a;
}
int lcm(int a,int b)
{
    if(a==0 ||b==0)return 0;
    return (a/gcd(a,b))*b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int gresult = gcd(a,b);
    int lresult =lcm(a,b);
    cout<<gresult<<endl;
    cout<<lresult;
    return 0;
}
