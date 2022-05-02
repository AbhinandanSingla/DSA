#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compartor(pair<int, int> a, pair<int, int> b)
{
    return (a.second < b.second);
}
int main()
{
    int n;
    vector<pair<int, int>> list;
    cout << "Enter no of activities ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int s, e;
        cout << "Enter activty start time ";
        cin >> s;
        cout << "Enter activty start time ";
        cin >> e;
        list.push_back(make_pair(s,e));
    }
    int activity = 1;
    sort(list.begin(), list.end(), compartor);
    for (int i = 0; i < list.size(); i++)
    {
        // list . endTime < list[i+1] .startTime
        if (list[i].second <= list[i + 1].first)
        {
            activity += 1;
        }
    }
    cout<<"Activities done are  "<<activity;
    return 0;
}