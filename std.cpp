#include <iostream>
#include <vector>
#include<iterator>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    vector<int> vec1;
    vector<int>::iterator ptr = vec1.begin();

    for (int i = 0; i < 3; i++)
    {
        int a;
        cout << "Enter number ";
        cin >> a;
        vec1.push_back(a);
    }
    // vec1.pop_back();

    display(vec1);
    vec1.insert(ptr,566);
    vec1.insert(ptr+1,455);
    vec1.insert(ptr+1,5,455); 
    // add 5 copy of 5
    display(vec1);

    return 0;
} 