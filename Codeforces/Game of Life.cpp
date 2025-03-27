// problem link: https://codeforces.com/contest/1523/problem/A

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solveTestCase(int n, int m, string &state) {
    string next_state = state;
    
    for (int iteration = 0; iteration < m; ++iteration) {
        bool changed = false;
        
        // Copy the current state into the next state for this iteration
        next_state = state;
        
        // Process the state to find which cells should change
        for (int i = 0; i < n; ++i) {
            if (state[i] == '0') {  // Dead cell
                // Check the neighbors (i-1 and i+1), considering boundaries
                int left = (i > 0 && state[i - 1] == '1') ? 1 : 0;
                int right = (i < n - 1 && state[i + 1] == '1') ? 1 : 0;
                
                if (left + right == 1) {  // Exactly one alive neighbor
                    next_state[i] = '1';
                    changed = true;
                }
            }
        }
        
        // If no changes were made in this iteration, break early
        if (!changed) break;
        
        // Update state to next state
        state = next_state;
    }
    
    cout << state << endl;
}

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    
    while (t--) {
        int n, m;
        cin >> n >> m;  // Read n and m
        
        string state;
        cin >> state;  // Read the initial state of the array
        
        solveTestCase(n, m, state);
    }
    
    return 0;
}
