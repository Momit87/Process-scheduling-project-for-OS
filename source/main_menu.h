#include <bits/stdc++.h>

#include "FIFO.h"
#include "SJFS.h"
#include "LJFS.h"
#include "Round_robin.h"
#include "priority_scheduling_pre.h"
#include "priority_scheduling_non_pre.h"
using namespace std;
int num;
vector<pair<int, int>> anb;
vector<int> priority;
int cpu_time;
void arraival_and_burst_time()
{
    system("cls");
    cout << "*****************************************" << endl;
    cout << "*                                       *" << endl;
    cout << "*          CPU SCHEDULING               *" << endl;
    cout << "*                                       *" << endl;
    cout << "*****************************************" << endl;
        cout << endl;
    cout << "Enter number of process(Max:26) : ";

    cin >> num;
    cout << "Process:Arrival:Brust" << endl;
    for (char c = 'A'; c < 'A' + num; c++)
    {
        cout << c << "=";
        int fir, sec;
        cin >> fir >> sec;
        anb.push_back({fir, sec});
    }
}
void arrival_and_burst_time_priority()
{
    system("cls");
    cout << "*****************************************" << endl;
    cout << "*                                       *" << endl;
    cout << "*          CPU SCHEDULING               *" << endl;
    cout << "*                                       *" << endl;
    cout << "*****************************************" << endl;
        cout << endl;
    cout << "Enter number of process(Max:26) : ";

    cin >> num;
    cout << "Process:Arrival:Brust:Priority" << endl;
    for (char c = 'A'; c < 'A' + num; c++)
    {
        cout << c << "=";
        int fir, sec, pri;
        cin >> fir >> sec >> pri;
        anb.push_back({fir, sec});
        priority.push_back(pri);
    }
}
void comp_betn_two_print(int p1, int t1, int p2, int t2)
{
    vector<string> v(7);
    v[1] = "FCFS";
    v[2] = "SJFS";
    v[3] = "LJFS";
    v[4] = "Priority scheduling(Non-preemptive)";
    v[5] = "Priority scheduling(Preemptive)";
    v[6] = "Round_Robin";
    cout << endl;
    // cout << v[p1] << " took " << t1 << " Units time" << endl;
    // cout << v[p2] << " took " << t2 << " Units time" << endl;
    cout << endl;
    if (t1 < t2)
    {
        cout << v[p1] << " is optimal for the given input" << endl;
    }
    else if (t1 > t2)
    {

        cout << v[p2] << " is optimal for the given input" << endl;
    }
    else
    {
        cout << "Both of the algorithms performed the same." << endl;
    }
}
void print_the_optimal(int q){
    vector<string> v(7);
    v[1] = "FCFS";
    v[2] = "SJFS";
    v[3] = "LJFS";
    v[4] = "Priority scheduling(Non-preemptive)";
    v[5] = "Priority scheduling(Preemptive)";
    v[6] = "Round_Robin";
    cout << "*************************************" << endl;
    cout <<"*"<< v[q] << " is optimal for the given input*" << endl;
    cout << "*************************************" << endl;
}
void main_menu()
{
    system("cls");
   
       cout  << endl
         << endl;
   cout << "***********************************************" << endl;
    cout << "*                                             *" << endl;
    cout << "*                CPU SCHEDULING               *" << endl;
    cout << "*                                             *" << endl;
    cout << "***********************************************" << endl;
    cout << endl;
    cout << "Choose the number matching what you want" << endl;
    cout << endl;

    cout << "1.Individual Algorithm Analysis " << endl;
    cout << "2.Comparison Between Two Algorithms " << endl;
    cout << "3.Find out which Algorithm is the best " << endl;
    cout << "Press Any Key To Exit..."<<endl;
    int choosen;
    cout << endl;
    cout << "Enter number : ";
    cin >> choosen;

    if (choosen == 1)
    {
        system("cls");
        cout << "***********************************************" << endl;
    cout << "*                                             *" << endl;
    cout << "*                CPU SCHEDULING               *" << endl;
    cout << "*                                             *" << endl;
    cout << "***********************************************" << endl;
    cout << endl;
    cout << "Choose the number matching what you want" << endl;
    cout << endl;
        cout << "1.FCFS" << endl;
        cout << "2.SJFS" << endl;
        cout << "3.LJFS" << endl;
        cout << "4.Priority Scheduling Non Preemptive" << endl;
        cout << "5.Priority Scheduling Preemptive" << endl;
        cout << "6.Round Robin" << endl;
        cout<<"Enter the number : ";
        
        int choose_algo;
        cin >> choose_algo;
        if (choose_algo == 1)
        {
            arraival_and_burst_time();
            system("cls");
            int time = FIFO(num, anb);
            cout << endl;
            // cout << "FCFS took " << time << " Units time" << endl;
        }
        else if (choose_algo == 2)
        {
            arraival_and_burst_time();
            system("cls");
            int time = SJFS(num, anb);
            cout << endl;
            // cout << "SJFS took " << time << " Units time" << endl;
        }
        else if (choose_algo == 3)
        {
            arraival_and_burst_time();
            system("cls");
            int time = LJFS(num, anb);
            cout << endl;
            // cout << "LJFS took " << time << " Units time" << endl;
        }
        else if (choose_algo == 4)
        {
            arrival_and_burst_time_priority();
            system("cls");

            int time = priority_scheduling_non_pre(num, anb, priority);
            cout << endl;
            // cout << "Priority scheduling(Non-preemptive) took " << time << " Units time" << endl;
        }
        else if (choose_algo == 5)
        {
            arrival_and_burst_time_priority();
            int cpu;
            cout << "Enter Cpu limit : ";
            cin >> cpu;
            system("cls");
            int time = priority_scheduling_pre(num, anb, priority, cpu);
            cout << endl;
            // cout << "Priority scheduling(Preemptive) took " << time << " Units time" << endl;
        }
        else if (choose_algo == 6)
        {
            arraival_and_burst_time();
            int cpu;
            cout << "Enter Cpu limit : ";
            cin >> cpu;
            system("cls");
            int time = Round_robin(num, anb, cpu);
            cout << endl;
            // cout << "Round Robin took " << time << " Units time" << endl;
        }
        else
        {
            return;
        }
         
    }
    else if (choosen == 2)
    {
        system("cls");
        cout << "***********************************************" << endl;
    cout << "*                                             *" << endl;
    cout << "*                CPU SCHEDULING               *" << endl;
    cout << "*                                             *" << endl;
    cout << "***********************************************" << endl;
    cout << endl;
    cout << "Choose the number matching what you want" << endl;
    cout << endl;
        cout << "1.FCFS" << endl;
        cout << "2.SJFS" << endl;
        cout << "3.LJFS" << endl;
        cout << "4.Priority Scheduling Non Preemptive" << endl;
        cout << "5.Priority Scheduling Preemptive" << endl;
        cout << "6.Round Robin" << endl;
        int choose_1, choose_2;
        cout << "Enter first number : ";
        cin >> choose_1;
        cout << "Enter second number: ";
        cin >> choose_2;
        if (choose_1 > choose_2)
        {
            swap(choose_1, choose_2);
        }
        if (choose_1 == 1)
        {

            if (choose_2 == 2)
            {
                arraival_and_burst_time();
                system("cls");
                int time1 = FIFO(num, anb);
                int time2 = SJFS(num, anb);
                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else if (choose_2 == 3)
            {
                arraival_and_burst_time();

                system("cls");
                int time1 = FIFO(num, anb);
                int time2 = LJFS(num, anb);
                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else if (choose_2 == 4)
            {
                arrival_and_burst_time_priority();

                system("cls");
                int time1 = FIFO(num, anb);
                int time2 = priority_scheduling_non_pre(num, anb, priority);
                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else if (choose_2 == 5)
            {
                arrival_and_burst_time_priority();
                int cpu;
                cout << "Enter Cpu limit : ";
                cin >> cpu;
                system("cls");
                int time1 = FIFO(num, anb);
                int time2 = priority_scheduling_pre(num, anb, priority, cpu);
                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else if (choose_2 == 6)
            {
                arraival_and_burst_time();
                int cpu;
                cout << "Enter Cpu limit : ";
                cin >> cpu;
                system("cls");
                int time1 = FIFO(num, anb);
                int time2 = Round_robin(num, anb, cpu);
                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else
            {
                return;
            }
        }
        else if (choose_1 == 2)
        {
            if (choose_2 == 3)
            {
                arraival_and_burst_time();

                system("cls");
                int time1 = SJFS(num, anb);
                int time2 = LJFS(num, anb);
                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else if (choose_2 == 4)
            {
                arrival_and_burst_time_priority();
                system("cls");
                int time1 = SJFS(num, anb);
                int time2 = priority_scheduling_non_pre(num, anb, priority);
                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else if (choose_2 == 5)
            {
                arrival_and_burst_time_priority();
                int cpu;
                cout << "Enter Cpu limit : ";
                cin >> cpu;
                system("cls");
                int time1 = SJFS(num, anb);
                int time2 = priority_scheduling_pre(num, anb, priority, cpu);
                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else if (choose_2 == 6)
            {
                arraival_and_burst_time();
                int cpu;
                cout << "Enter Cpu limit : ";
                cin >> cpu;
                system("cls");
                int time1 = SJFS(num, anb);
                int time2 = Round_robin(num, anb, cpu);
                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else
            {
                return;
            }
        }
        else if (choose_1 == 3)
        {
            if (choose_2 == 4)
            {
                arrival_and_burst_time_priority();
                system("cls");
                int time1 = LJFS(num, anb);
                int time2 = priority_scheduling_non_pre(num, anb, priority);
                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else if (choose_2 == 5)
            {
                arrival_and_burst_time_priority();
                int cpu;
                cout << "Enter Cpu limit : ";
                cin >> cpu;
                system("cls");
                int time1 = LJFS(num, anb);
                int time2 = priority_scheduling_pre(num, anb, priority, cpu);
                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else if (choose_2 == 6)
            {
                arraival_and_burst_time();
                int cpu;
                cout << "Enter Cpu limit : ";
                cin >> cpu;
                system("cls");
                int time1 = LJFS(num, anb);
                int time2 = Round_robin(num, anb, cpu);
                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else
            {
                return;
            }
        }
        else if (choose_1 == 4)
        {
            if (choose_2 == 5)
            {
                arrival_and_burst_time_priority();
                int cpu;
                cout << "Enter Cpu limit : ";
                cin >> cpu;
                system("cls");
                int time1 = priority_scheduling_non_pre(num, anb, priority);
                int time2 = priority_scheduling_pre(num, anb, priority, cpu);
                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else if (choose_2 == 6)
            {
                arrival_and_burst_time_priority();
                int cpu;
                cout << "Enter Cpu limit : ";
                cin >> cpu;
                system("cls");
                int time1 = priority_scheduling_non_pre(num, anb, priority);
                int time2 = Round_robin(num, anb, cpu);
                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else
            {
                return;
            }
        }
        else if (choose_1 == 5)
        {
            if (choose_2 == 6)
            {
                arrival_and_burst_time_priority();
                int cpu;
                cout << "Enter Cpu limit : ";
                cin >> cpu;
                system("cls");
                int time1 = priority_scheduling_pre(num, anb, priority, cpu);
                int time2 = Round_robin(num, anb, cpu);

                comp_betn_two_print(choose_1, time1, choose_2, time2);
            }
            else
            {
                return;
            }
        }
        else
        {
            return;
        }
         
    }
    else if (choosen == 3)
    {
        arrival_and_burst_time_priority();
        int cpu;
        cout << "Enter Cpu limit : ";
        cin >> cpu;
        cout << endl;
        system("cls");
        cout << "***********************************************" << endl;
    cout << "*                                             *" << endl;
    cout << "*                CPU SCHEDULING               *" << endl;
    cout << "*                                             *" << endl;
    cout << "***********************************************" << endl;
    cout << endl;
        int t1 = FIFO(num, anb);
        cout<<endl;
        int t2 = SJFS(num, anb);
        cout<<endl;
        int t3 = LJFS(num, anb);
        cout<<endl;
        int t4 = priority_scheduling_non_pre(num, anb, priority);
        cout<<endl;
        int t5 = priority_scheduling_pre(num, anb, priority, cpu);
        cout<<endl;
        int t6 = Round_robin(num, anb, cpu);
        cout<<endl;
        set<int>s;
        s.insert(t1); 
        s.insert(t2); 
        s.insert(t3); 
        s.insert(t4); 
        s.insert(t5); 
        s.insert(t6);

        if(s.size()==1){
            
            cout << "All of the algorithms performed the same." << endl;

        } 
        else{
            int  maxi=0;
            int  track=1;
            if(t1<maxi){
                maxi=t1;
                track=1;
            }
            if(t2<maxi){
                maxi=t2;
                track=2;
            }
            if(t3<maxi){
                maxi=t3;
                track=3;
            }
            if(t4<maxi){
                maxi=t4;
                track=4;
            }
            if(t5<maxi){
                maxi=t5;
                track=5;
            }
            if(t6<maxi){
                maxi=t6;
                track=6;
            }
            print_the_optimal(track);
        }
         
    }
    
    else
    {
        return;
    }

    return;
}