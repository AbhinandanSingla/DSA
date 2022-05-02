#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
void display(vector<pair<int, int>> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i].first << endl;
    }
}
bool comparator(pair<int, int> a, pair<int, int> b)
{
    return ((a.first / a.second) > (b.first / b.second));
}
int main()
{
    int totalweight, obj;
    cout << "Enter total weight ";
    cin >> totalweight;
    cout << "Enter No of objects ";
    cin >> obj;
    vector<pair<int, int>> v;
    for (int i = 0; i < obj; i++)
    {
        int p, w;
        cout << "Enter your profit ";
        cin >> p;
        cout << "Enter your weight ";
        cin >> w;
        v.push_back(make_pair(p, w));
    }
    sort(v.begin(), v.end(), comparator);
    int i = 0;
    double profit = 0;
    while (totalweight > 0)
    {
        if (v[i].second <= totalweight)
        {
            cout << "pass" << endl;
            totalweight -= v[i].second;
            profit += v[i].first;
        }
        else
        {
            cout << "fail" << endl;
            profit += ((v[i].first) / v[i].second) * totalweight;
            totalweight = 0;
        }
        i++;
    }
    cout << "Your Profit will be " << profit;
    return 0;
}