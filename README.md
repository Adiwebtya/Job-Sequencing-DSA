# Job Sequencing Problem (Greedy Algorithm)

This project implements a classic **Greedy Algorithm** to solve the **Job Sequencing Problem**, where each job has a deadline and profit, and the goal is to schedule jobs to maximize total profit.

---

## 🔍 What the Project Is

The **Job Sequencing Problem** is an optimization problem commonly asked in coding interviews and competitive programming. Each job takes 1 unit of time, and only one job can be scheduled at a time. The objective is to select and schedule jobs such that the total profit is maximized while respecting deadlines.

---

## ⚙️ How It Works

- Each job has three properties: **Job ID**, **Deadline**, and **Profit**.
- The algorithm:
  1. Sorts all jobs in **descending order of profit**.
  2. Allocates each job to the latest available time slot before its deadline.
  3. Tracks the number of jobs done and total profit earned.

The solution has a time complexity of approximately **O(n log n)** due to sorting.

---

## ▶️ How to Run the Code

### Requirements
- C++ compiler (g++, clang++, or any online IDE)

### Steps
1. Copy the code from the `job_sequencing.cpp` file in this repository.
2. Paste it into any C++ IDE or editor (such as [GeeksforGeeks IDE](https://ide.geeksforgeeks.org/) or [Replit](https://replit.com/)).
3. Compile and run the program.

You’ll see the total number of jobs done and the maximum profit as output.

---

## 📁 Sample Input
```cpp
5
1 2 100
2 1 19
3 2 27
4 1 25
5 3 15





### Output
2 127


---

## 🔧 Topics Practiced

- Greedy Algorithms
- Sorting
- Structs and Arrays in C++

---

This was one of the projects I did to get better at writing clean, efficient code using greedy techniques. :)
