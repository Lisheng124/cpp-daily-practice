//Review 
//1)找最大值（数组）
/*#include <iostream>
#include <string>
#include <climits>
using namespace std;
int main()
{
  int num[100];
  int n;
  cout<<"Please enter the number: ";
  cin>>n;
  cout<<"Please enter the score: ";
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  //double maxval=num[0];//设为最小整数，确保输入的任何数都比它大
  int maxval=INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(num[i]>maxval)
    {maxval=num[i];}
  }
  cout<<"Max: "<<maxval<<endl;
    return 0;
}
//2)找最小值 + 位置
#include <iostream>
#include <string>
#include <climits>
using namespace std;
int main()
{
  int num[100];
  int n;
  
  cout<<"Please enter the number of n:";
  cin>>n;
  cout<<"Please enter the value of each n:";
    int minval=INT_MAX;
    int minIndex=-1;//0或正整数都是一个真实的位置，但-1永远不可能成为下标的数字，安全！
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
     if(num[i]<minval)
  {
    minval=num[i];
    minIndex= i;
  }
  }
  cout<<"Min: "<<minval<<endl<<"Index: "<<minIndex<<endl;
  return 0;
}*/
//反转数组（必须用指针）
#include <iostream>
#include <string>
#include <climits>
using namespace std;
void reverseNum(int*p,int n)
{
  int *left=p;
  int *right=p+n-1;
  while(left<right)
  {
   int temp=*left;
   *left=*right;
   *right=temp;
   left++;
   right--;
  }
  
}
int main()
{
  int num[100];
  int n;
  cout<<"Please enter the number: ";
  cin>>n;
  cout<<"Please enter the score: ";
  for(int i=0;i<n;i++)
  {
    cin>>num[i];
  }
  reverseNum(num,n);
  cout << "Reversed array: ";
  for(int i=0;i<n;i++)
  {
    cout<<num[i]<<" ";
  }
  cout<<endl;
  return 0;
}
/*#include <iostream>
#include <string>
#include <climits>
using namespace std;
int main()
{
  return 0;
}*/
