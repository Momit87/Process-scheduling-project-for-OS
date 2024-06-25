#include <bits/stdc++.h>

using namespace std;
void show4(vector<int> tim, vector<char> pro)
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
int Round_robin(int n, vector<pair<int, int>> anb, int cpu_time)
{

    vector<pair<pair<int, int>, char>> v(n);

    for (int i = 0; i < n; i++)
    {

        v[i].first.first = anb[i].first;
        v[i].first.second = anb[i].second;
        v[i].second = 'A' + i;
    }
    sort(v.begin(), v.end());

    queue<pair<int, char>> ready;
    int time = 0;
    int j = 0;
        vector<int> tim;
        vector<char> pro;

    for (j = 0; j < n; j++)
    {
        time=max(v[j].first.first,time);
        ready.push({v[j].first.second, v[j].second});

        j++;
        while (j < n && v[j].first.first <= time)
        {
            ready.push({v[j].first.second, v[j].second});

            j++;
        }
        // cout << "----------------Gantt Chart-----------------" << endl;
        // cout << "Time  : Character " << endl;
        while (!ready.empty())
        {
            pair<int, char> temp = ready.front();
            ready.pop();
            int execute = min(temp.first, cpu_time);
            temp.first -= execute;

            time += execute;
            // cout << time << ' ' << temp.second << endl;
            tim.push_back(time);
            pro.push_back(temp.second);
            while (j < n && v[j].first.first <= time)
            {
                ready.push({v[j].first.second, v[j].second});

                j++;
            }

            if (temp.first > 0)
            {
                ready.push(temp);
            }
        }
    }
    show4(tim, pro);
    cout << endl;
    cout << "Round Robin" << " took " << time << " Units time" << endl;
    cout << endl;
    cout << endl;
    // cout<<"Times : "<<time<<endl;
    return time;
}