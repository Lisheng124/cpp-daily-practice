题1：数组最大值
#include<iostream>
using namespace std;
int main()
{ 
//1.define the array
   int num[5];
//2.input for loop
//for(initialization; condition; update)
   for(int i=0;i<5;i++)
   {
       cin>>num[i];
   }
//find the max value
  int maxval = num[0];
  for(int i=1;i<5;i++)
  if(num[i]>maxval)
  {
  maxval = num[i];    
  }
//output the result
   cout<<"The max value is "<<maxval<<endl;
    return 0;
}

//After Optimizing
#include <iostream>
using namespace std;
int main()
{
    int num,maxval;
    cin>>maxval;
    for (int i=1;i<5;i++)
    cin>>num;
    if(num>maxval)
    {
     maxval=num;   
    }
   cout<<"The max value is "<<maxval<<endl;
    return 0 ;
}*/
//题2：数组最小值
#include<iostream>
using namespace std;
int main()
{
    int num;int minval;
    cin>>minval;
    for(int i=1;i<5;i++)
   { cin>>num;
    if(minval>num)
    {minval= num;}}
       cout<<"The min value is "<<minval<<endl;

    return 0;
}*/
//题3：数组求和
#include <iostream>
using namespace std;
int main()
{
    int num[5],sum = 0;
    for(int i=0;i<5;i++)
    {
        cin>>num[i];
        sum = num[i]+sum;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0 ;
}

#include<iostream>
using namespace std;
int main()
{
int num[5],sum = 0;
for(int i=0;i<5;i++)
{cin>>num[i];}
for(int x:num)
{sum=sum+x;}
    cout<<"Sum = "<<sum<<endl;
return 0;
}*/
//题4：统计大于60的成绩
#include <iostream>
using namespace std;
int main()
{
    int score[10];
    int sum;
    for(int i=0;i<10;i++)
    {cin>>score[i];}
    
    for(int i=0;i<10;i++)
    {if (score[i] >60)
    {
        sum=sum +1;
    }
    }
    cout<<"Pass = "<<sum<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
int score[10],sum =0;
for (int i=0;i<10;i++)
{cin>>score[i];
if (score[i]>60)
{
    sum=sum+1;
}
}
cout<<"Sum = "<<sum<<endl;
return 0 ;
}
//题5：数组倒序
#include<iostream>
using namespace std;
int main()
{
    int num[5];
    for (int i=0;i<5;i++)
    {
        cin>>num[i];
    }
    cout << "Reverse orderly: ";
    
    for(int i=4;i>=0;i--)
    {
    cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}
//题6：查找元素
#include <iostream>
using namespace std;
int main()
{
    int num[5];
    int target=0;
    bool found =0;
    for(int i=0;i<5;i++)
    {
        cin>>num[i];
    }
    cin>>target;
    {
        for(int i=0;i<5;i++)
        if (num[i]== target)
        {
            cout<<"Found at index "<<i<<endl;
            found = 1;
            break;
        }
        
    }
    if(!found)//=(found =0)
    {
        cout << "Not found" << endl;
    }
    return 0;
}*/
//成绩统计系统
//输入 10个学生成绩-output>average=?,max=?，min=？
#include <iostream>
using namespace std;
int main()
{
int score[10],maxscore,minscore;
float average = 0,sum=0;
//cin>>maxscore>>minscore;这里会让多两个输入值变成2+下边的10
cin>>score[0];
maxscore =score[0];
minscore =score[0];
sum = score[0];
for(int i=1;i<10;i++)
{
    cin>>score[i];
if(score[i] > maxscore)
{
maxscore = score[i] ;
}
if(score[i] < minscore)
{
minscore = score[i] ;
}
sum=score[i]+sum;
average=sum/10.0;
}
cout<<"Max= "<<maxscore<<endl;
cout<<"Min= "<<minscore<<endl;
cout<<"Average= "<<average<<endl;

return 0;
}
//如果在一开始就int min=0；无论怎么循环就只会是0；
//别预设 0，直接把用户输入的第一个成绩当成目前的最高分和最低分
