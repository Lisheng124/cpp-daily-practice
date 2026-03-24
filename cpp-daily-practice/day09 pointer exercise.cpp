#include <iostream>
using namespace std;
int main()
{
    int arr[3]={100,200,300};
    int *p =arr;
    for(int i=0;i<3;i++)
    {
        *p =0;
        p++;//在 for里p始终指向数组的第一个元素arr[0] 没有p++就一直更新第一个
        //结果输出会是 0 200 300
        cout<<arr[i]<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
void resetArray(int* p, int size) {
    for (int i = 0; i < size; i++) {
        *(p + i) = -1; // 统一修改为 -1
    }
}

int main() {
    int data[4] = {1, 2, 3, 4};
    resetArray(data, 4); // 传递数组名（即地址）
    // 此时 data 已经是 {-1, -1, -1, -1}
   for (int i = 0; i < 4; i++) {
        cout << data[i] << " "; // 输出: -1 -1 -1 -1 
    }
    cout << endl;
    return 0;
}