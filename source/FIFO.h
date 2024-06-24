#include <bits/stdc++.h>

using namespace std;
void show1(vector<int> tim,vector<char> pro)
{   
   
    string s, p;
    s = "Time   :";
    p = "Process:";
    int n = tim.size();
    for (int i = 0; i < n; i++)
    {
        string spa = to_string(tim[i]);
        s += ' ';
        s += spa;

        int sz=spa.size();
        for (int j = 0; j <sz; j++)
        {
            p += ' ';
        }
        p += pro[i];
    }

    cout << "Gantt chart-----\n";
    cout << s << endl;
    cout << p << endl;
    return;
}
int FIFO(int n, vector<pair<int, int>> &anb)
{

    vector<pair<pair<int, int>, char>> v(n);

    for (int i = 0; i < n; i++)
    {

        v[i].first.first = anb[i].first;
        v[i].first.second = anb[i].second;
        v[i].second = 'A' + i;
    }
    sort(v.begin(), v.end());

    // cout << "----------------Gantt Chart-----------------" << endl;
    // cout << "Time  : Character" << endl;
    int time = 0;
    vector<int> tim;
    vector<char> pro;
    for (int i = 0; i < n; i++)
    {
        time = max(v[i].first.first, time);
        time += v[i].first.second;
        // cout << time << ' ' << v[i].second << endl;
        tim.push_back(time);
        pro.push_back(v[i].second);
    }
    show1(tim, pro);
    cout << endl;
    cout << "FCFS" << " took " << time << " Units time" << endl;
    cout<<endl;
    cout<<endl;
    // cout<<"Times : "<<time<<endl;

    return time;
}