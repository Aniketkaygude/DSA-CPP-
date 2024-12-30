#include <vector>
#include <unordered_set>

class Solution {
public:
    int findPair(int n, int x, std::vector<int> &arr) {
        // Use an unordered set to store the elements of the array
        std::unordered_set<int> elements;

        for (int i = 0; i < n; ++i) {
            // Check if the complement (arr[i] + x) or (arr[i] - x) exists in the set
            if (elements.find(arr[i] + x) != elements.end() || elements.find(arr[i] - x) != elements.end()) {
                return 1;
            }
            // Insert the current element into the set
            elements.insert(arr[i]);
        }

        // If no such pair is found, return -1
        return -1;
    }
};