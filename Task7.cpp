#include <iostream>
#include <vector>
using namespace std;
// Function to find all indices of a key in the array
vector<int> findAllIndices(vector<int> arr, int key) {
    vector<int> result;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            result.push_back(i);  // store index if match found
        }
    }
    return result; // will be empty if key not found
}

int main() {
    // Test case 1: Multiple occurrences
    vector<int> arr1 = {1, 2, 3, 2, 4, 2};
    vector<int> res1 = findAllIndices(arr1, 2);
    cout << "Test 1 (Multiple occurrences): ";
    for (int i : res1) cout << i << " ";  // Expected: 1 3 5
    cout << endl;

    // Test case 2: Key not present
    vector<int> arr2 = {5, 6, 7};
    vector<int> res2 = findAllIndices(arr2, 8);
    cout << "Test 2 (Key not present): ";
    for (int i : res2) cout << i << " ";  // Expected: (nothing)
    cout << endl;

    // Test case 3: Empty array
    vector<int> arr3 = {};
    vector<int> res3 = findAllIndices(arr3, 1);
    cout << "Test 3 (Empty array): ";
    for (int i : res3) cout << i << " ";  // Expected: (nothing)
    cout << endl;
    return 0;
}