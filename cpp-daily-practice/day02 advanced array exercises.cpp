题1：数组最大值的位置
#include <iostream>
using namespace std;
int main()
{
    int arr[5],maxnum,index;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    maxnum=arr[0];
    index=0;
    for(int i=0;i<5;i++)
   {
       if(arr[i]>maxnum)
       {
           maxnum=arr[i];
           index=i;
       }
   }
   cout<<"Max index= "<<index;
    return 0;
}

题3：统计偶数
#include <iostream>
using namespace std;
int main()
{
    int num[10],count=0;
    
    for(int i=0;i<10;i++)
    {
        cin>>num[i];
       
    }
        for(int i=0;i<10;i++){
    if((num[i]%2) ==0)
    {
count++;    }
        }
             cout<<"Even count= "<<count<<endl;

    return 0;
}
题6：查找最大值和最小值（一次循环完成）
输入 8 个整数，同时输出：
Max = Min =
#include<iostream>
using namespace std;
int main()
{
int val[8],maxval=0,minval=0;
for(int i=0;i<8;i++)
{
cin>>val[i];
if(val[i] > maxval)
{val = maxval};
if(val[i] < minval)
{val = minval};
cout<<"Max= "<<maxval<<endl;
cout<<"Min= "<<minval<<endl; 
}
return 0;
}错的
#include <iostream>
using namespace std;
int main()
{
    int val[8];
    int maxval,minval;
    for(int i=0;i<8;i++){
    cin>>val[i];
    if(i == 0)
    {maxval = val[0];
        minval = val[0];
    }else{if(val[i]>maxval)
        {maxval=val[i];}
    }
    if(val[i]<minval)
    {minval=val[i];}
    }
    cout << "Max= " << maxval << endl;
    cout << "Min= " << minval << endl;

    return 0;
}

题7：统计平均分
#include<iostream>
using namespace std;
int main()
{
    int score[8];
 float average,sum;
 for(int i =0;i<8;i++)
 cin>>score[i];
 for(int i =0;i<8;i++)
 sum=score[i]+sum;
 average=sum/8.0;
 cout<<average;
  return 0 ; 
}

#include<iostream>
using namespace std;
int main()
{
    int score[8];
    float average;
    float sum=0;
    for(int i=0;i<8;i++)
    {
        cin>>score[i];
        sum+=score[i];
    }
    average=sum/8.0;
    cout << "Average score: " << average << endl;
    return 0;
}
题8：统计高于平均分的人数
#include<iostream>
using namespace std;
int main()
{
    int sum=0,count=0,num[8];
    float average=0;
    for(int i=0;i<8;i++)
    {
        cin>>num[i];
        sum +=num[i];
    }
    average=sum/8.0;
    for(int i=0;i<8;i++)
    if(num[i]>average)
    {
        count++;
    }
    cout << "Average = " << average << endl;
    cout << "Above average = " << count << endl;
    
    return 0;
}
数组排序（简单版）
输入 5 个整数
输出 从小到大排序
#include <iostream>
using namespace std;
int main()
{
    int num[5];
    for(int i=0;i<5;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            if(num[j]>num[j+1])
            {
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) 
    {
        cout << num[i] << " ";
    }
     return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int mass[5];
    for(int i=0;i<5;i++)
    {cin>>mass[i];}
    for(int i=0;i<4;i++)
    {for(int j=0;j<4;j++)
        {
            if(mass[j]<mass[j+1])
            {int temp=mass[j+1];
                mass[j+1]=mass[j];
                mass[j]=temp;
            }
        }
    }
    cout<<"Arrange the decesding order: ";
    for(int i=0;i<5;i++)
    {cout<<mass[i]<<"";}
    return 0;
}*/