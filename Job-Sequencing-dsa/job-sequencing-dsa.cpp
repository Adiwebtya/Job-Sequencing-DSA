#include<bits/stdc++.h>
using namespace std;

struct Job {
    char id;
    int deadline;
    int profit;
};

bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

int main() {
    vector<Job> jobs = {
        {'A', 2, 100},
        {'B', 1, 50},
        {'C', 2, 10},
        {'D', 1, 20},
        {'E', 3, 30}
    };

    sort(jobs.begin(), jobs.end(), compare);

    int max_deadline = 0;
    for (auto job : jobs) {
        max_deadline = max(max_deadline, job.deadline);
    }

    vector<char> schedule(max_deadline + 1, '-'); 

    int total_profit = 0;
    vector<char> job_sequence;

    for (auto job : jobs) {
        for (int t = job.deadline; t > 0; t--) {
            if (schedule[t] == '-') {
                schedule[t] = job.id;
                total_profit += job.profit;
                job_sequence.push_back(job.id);
                break;
            }
        }
    }

    cout << "Jobs scheduled: ";
    for (char j : job_sequence) cout << j << " ";
    cout << "\nTotal Profit: " << total_profit << endl;

    return 0;
}
