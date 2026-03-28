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
#include <iostream>
#include <climits>

using namespace std;

// 判断是否回文的函数
// 返回 true 表示是回文，false 表示不是
bool isPalindrome(int *p, int n) {
    int *left = p;
    int *right = p + n - 1;

    while (left < right) {
        if (*left != *right) {
            return false; // 只要发现一对不相等，直接判定为“不是”
        }
        left++;
        right--;
    }
    return true; // 如果全部对比完成都没退出，说明是回文
}

int main() {
    int num[100];
    int n;

    cout << "Please enter the number of elements: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    cout << "Please enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    // 调用判断函数
    if (isPalindrome(num, n)) {
        cout << "Result: It is a palindrome!" << endl;
    } else {
        cout << "Result: Not a palindrome." << endl;
    }

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
