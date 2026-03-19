//题1：函数求最大值
//写一个函数：
/#include<iostream>
using namespace std;
int findMax(int arr[],int n)
{
int maxval=arr[0];
for(int i=1;i<n;i++)
{
if(arr[i]>maxval)
{maxval=arr[i];}
}
return maxval;
}
int main()
{
    int n;
    cout<<"Please enter the number of elements: "<<endl;
    cin>>n;
    if(n<=0)
    {
        cout<<"Please enter the number larger than 0: "<<endl;
        return 0;
    }
    int arr[n];
    cout<<"Please enter "<<n<<""<<"whole number: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result=findMax(arr,n);
    cout << "The bigger number of the group is: " << result << endl;
    return 0；
}

题3：函数求平均值
#include<iostream>
using namespace std;
float getAverage(int arr[],int n)
{
    if(n<=0)return 0;
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
return sum/n;
    
}
int main()
{
    int length;
    cout<<"Please enter the length of sequence:";
    cin>>length;
    int number[100];
    cout<<"Please enter "<<length<<" integer:"<<endl;
    for(int i=0;i<length;i++)
    {
        cin>>number[i];
    }
    float avg=getAverage(number,length);
    cout<<"Average is "<<avg<<endl;
    return 0;
}
//题4：函数统计偶数
#include<iostream>
using namespace std;
int countEven(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++){
    if(arr[i]%2==0)
    {
        count++;
    }
    }
    return count++;
}
int main()
{
    int n;
    cout<<"Please enter the number: ";
    cin>>n;
int num[100];
cout<<"Please enter "<<n<<" interger：";
for(int i=0;i<n;i++)
{cin>>num[i];}
int result=countEven(num,n);
cout<<"The Number of even number is： "<<result<<endl;
return 0;
}

//题5：函数统计大于60的人数
#include<iostream>
using namespace std;
int countPass(int arr[], int n) 
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=60)
        {
            count++;
        }
    }
    return count;
}
int main()
{
int n = 0;
cout<<"Please enter the number of students: ";
cin>>n;
int num[100];
cout << "Please enter the scores: " << endl;
for(int i=0;i<n;i++)
{cin>>num[i];}
int result=countPass(num,n);
cout<<"The number of pass student is: "<<result<<endl;
return 0;
}

/*小程序
函数版成绩管理系统
要求：
输入 10 个成绩 输出：Average = Max = Min = Pass count =*/
#include <iostream>
using namespace std;
//int getAverage(arr[],int n)
double getAverage(int arr[],int n)//
{
double sum=0;//int and float also can based on question
 if(n<=0)return 0;//这样可以避免n等于0
for(int i=0;i<n;i++)
{
    //cin>>arr[i];//在主函数才打印
    sum +=arr[i];
}
//average=sum/n;//在主函数才需要
//return average;//直接返回sum/n即可
return sum/n;
}
int findMax(int arr[],int n)//inside() arr[]x,一定要说明是什么类型 
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
     return max;
}
int findMin(int arr[],int n)
{
    int min=arr[0];//因为这里取了一个数，所以下面for要从int i=1开始
    for(int i=1;i<n;i++)
    {
     if(arr[i]<min)
     {
         min=arr[i];
     }
    }
    return min; 
}
int countPass(int arr[],int n)
{
    int count=0;//一开始漏了
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=60)
        { 
            count++;
        }
    }
    return count;
}

int main()
{
   int n=0;
   int num[100];
   
   cout<<"Please enter the score of the student:";
   cin>>n;
   cout << "Please enter the scores: " << endl;
   for(int i=0;i<n;i++)
   {
       cin>>num[i];
   }
   double average=getAverage(num,n);
   cout<<"The average score of the student is: "<<average<<endl;
   int max=findMax(num,n);
   cout<<"The highest score: "<<max<<endl;
   int min=findMin(num,n);
   cout<<"The lowest score: "<<min<<endl;
   int pass =countPass(num,n);
   cout<<"The number of pass students is: " << pass << endl; 
   return 0;
}
//cout<<"The average score of the student is: ";