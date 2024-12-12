// clang++ -std=c++11 leetcode2.cpp -o leetcode2
// ./leetcode2 (use this to run this code)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1; 
        int p2 = n - 1; 
        int p = m + n - 1; 

        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }

 
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums1(6);
    nums1[0] = 1; nums1[1] = 2; nums1[2] = 3;
    int m = 3;
    
    vector<int> nums2;
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);
    int n = 3;

    sol.merge(nums1, m, nums2, n);

    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
