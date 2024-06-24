#include <bits/stdc++.h>

using namespace std;
void show2(vector<int> tim,vector<char> pro)
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

        for (int j = 0; j < spa.size(); j++)
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
int SJFS(int n,vector<pair<int,int>>&anb)
{
    
    vector<pair<pair<int, int>, char>> v(n);

    for (int i = 0; i < n; i++)
    {
       
        v[i].first.second=anb[i].first;
        v[i].first.first=anb[i].second-anb[i].first;
        v[i].second = 'A' + i;
    }
    sort(v.begin(), v.end());
    //  cout << "----------------Gantt Chart-----------------" << endl;
    // cout << "Time  : Character " << endl;
    int time=0;
    vector<int>tim;
    vector<char>pro;
    for(int i=0;i<n;i++){
        time=max(v[i].first.second,time);
        time+=v[i].first.first;
        // cout<<time<<' '<<v[i].second<<endl;
        tim.push_back(time);
        pro.push_back(v[i].second);
    }
    show2(tim,pro);
    cout<<endl;
    // cout<<"Times : "<<time<<endl;
    cout << "SJFS"<< " took " << time << " Units time" << endl;
    cout<<endl;
    cout<<endl;

    return time;
}