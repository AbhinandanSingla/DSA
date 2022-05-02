#include <iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;
bool maxElement(pair<int,int> a,pair<int,int>b){
    return(a.first<b.first);
}
bool comparator(pair<int,int> a,pair<int,int>b){
    return (a.second > b.second);
}
int main() {
    vector<pair<int,int>> chidiya;
    int n;
    cout<<"Enter no of jobs ";
    cin>>n;
    for(int i=0;i<n;i++){
        int d,p;
        cout<<"Enter your job and deadline ";
        cin>>d;
        cin>>p;
        chidiya.push_back(make_pair(d,p));
    }
    sort(chidiya.begin(),chidiya.end(),comparator);
    auto max = max_element(chidiya.begin(),chidiya.end(),maxElement);
    int time[max->first];

    cout<<"DEADLINE: "; 
    for(int i = 0;i<n;i++)
    {
        cout<<chidiya[i].first<<" ";
    }
    cout<<endl;
    cout<<"PROFIT: "; 
    for(int i = 0;i<n;i++)
    {
        cout<<chidiya[i].second<<" ";
    }
    cout<<endl;
    for (int i=0;i<max->first;i++){
        time[i]=0;
    }
    for(int i=0;i<n;i++ ){
        for(int j = chidiya[i].first-1;j>=0;j--){
            if(time[j]==0){
                time[j] = chidiya[i].second;
                break;
            }
        }
    }
    for(int i = 0;i<max->first;i++)
    {
        cout<<time[i]<<" ";
    }
    cout<<endl;
    int res = 0;
    for(int i = 0;i<max->first;i++){
        res += time[i];
    }
    cout<<res;
    return 0;
}
