# A-Comparative-Analysis-of-Scheduling-Algorithms
##### International Islamic University Chittagong


## 📃Table of Content :
-   <a href="#Introduction">Introduction</a>  
-   <a href="#Objective">Objective</a>  
-   <a href="#How_to_use">How_to_use</a>  
-   <a href="#Working-Procedure">Working Procedure</a>
-   <a href="#Technology">Technology</a>
-   <a href="#Conclusion">Conclusion</a>
<!-- -   <a href="#ss">SnapShots</a> -->



# <h1 class="Introduction">Introduction</h1>
<!-- ## Description -->
   Here, We explore the complex realm of CPU scheduling
algorithms in this investigation. Join us on a journey through the core
principles where simplicity meets efficacy, and every cycle counts.

# <h2 class="Objective">📜How_to_use</h2> 
1.Clone the folder on your device. 

2.Make sure u have c/c++ compiler.

3.Navigate to main.cpp run the file and enjoy.

# <h2 class="Objective">📜Objective</h2> 
 
1. Goal: Evaluate and contrast CPU scheduling methods, such as FCFS,
Round Robin, Priority Scheduling, SJF, and LJF, in-depth.
2. Focus : Examine performance indicators like waiting, response,
turnaround, and throughput times.
3. Methodology: Perform extensive research and analysis to determine
the benefits and drawbacks of every algorithm in various contexts.
4. Result : Based on the comparative study's findings, offer informative
information to improve work management and system performance
through well-informed algorithm selection.

#  <h2 class="Working-Procedure">Working Procedure</h2>

 The following is a quick synopsis of how each CPU scheduling
algorithm operates:
1. First Come First Serve (FCFS):
- Processes are executed in the order they arrive in the ready queue.
- The CPU is allocated to the first process in the queue until it
completes its execution or moves to the waiting state.
- FCFS is non-preemptive, meaning once a process starts executing, it
continues until it finishes.

2. Shortest Job First (SJF):
- The process with the shortest burst time (execution time) is selected
for execution.
- If multiple processes have the same shortest burst time, FCFS
tie-breaking is used.
- SJF can be preemptive (Shortest Remaining Time First - SRTF),
where the currently executing process can be preempted by a new
process with a shorter burst time.

3. Longest Job First (LJF):
- Similar to SJF, but prioritizes processes with the longest burst time.
- Like SJF, it can be either preemptive or non-preemptive.
  
4. Priority Scheduling:
- Each process is assigned a priority, and the CPU is allocated to the
process with the highest priority.
- Priority can be assigned based on factors like deadline, importance,
or other criteria.
- Preemptive and non-preemptive versions of priority scheduling exist.
  
5. Round Robin:
- Processes are executed in a cyclic manner, with each process getting
a small unit of CPU time (time quantum) called a time slice or time
quantum.
- If a process does not complete within its time slice, it is preempted,
and the CPU is allocated to the next process in the queue.
- Preemption ensures fairness and prevents starvation.



# <h2 class="Technology">Technology</h2>
- language c++
- STL (queue,priority queue)
- console to see the results and interaction.

# <h2 class="Conclusion">Conclusion</h2>
  Our comparative study of CPU scheduling techniques highlights the
complex trade-offs between efficiency and simplicity, in conclusion.
Although there isn't a single method that is always better, knowing their
advantages helps us optimize system performance for a range of
workloads.
<!-- 
# <h2 class="ss">SnapShots: 📷</h2>
<!-- ## SnapShot: 📷 -->

<!-- // you gotta add some images here. -->
