//vector是会自动记长度的数组，第三周在学
#include<iostream>
using namespace std;
int main(){
    int nums[10005];
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){//从i+1开始,可以避免自己与自己加
            if(nums[i]+nums[j]==target){
                cout<<i<<" "<<j<<endl;
                return 0;//找到就走,避免多余
            }
        }
    }
    return 0;
}