// clang++ -std=c++11 leetcode4.cpp -o leetcode4
// ./leetcode4


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int prefers0 = 0, prefers1 = 0;

        for (int student : students) {
            if (student == 0) prefers0++;
            else prefers1++;
        }

        for (int sandwich : sandwiches) {
            if (sandwich == 0 && prefers0 > 0) {
                prefers0--; 
            } else if (sandwich == 1 && prefers1 > 0) {
                prefers1--; 
            } else {
                break; 
            }
        }

        return prefers0 + prefers1;
    }
};

int main() {
    Solution sol;
    vector<int> students1 = {1, 1, 0, 0};
    vector<int> sandwiches1 = {0, 1, 0, 1};
    cout << sol.countStudents(students1, sandwiches1) << endl; 

    vector<int> students2 = {1, 1, 1, 0, 0, 1};
    vector<int> sandwiches2 = {1, 0, 0, 0, 1, 1};
    cout << sol.countStudents(students2, sandwiches2) << endl; 

    return 0;
}
