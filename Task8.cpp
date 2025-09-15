#include <iostream>
#include <string>
using namespace std;

int findSubstring(string text, string pattern) {
    if (pattern == "") return 0;  // empty pattern case
    
    for (int i = 0; i <= text.size() - pattern.size(); i++) {
        if (text.substr(i, pattern.size()) == pattern) {
            return i;  // found at index i
        }
    }
    return -1;  // not found
}

int main() {
    cout << findSubstring("hello world", "hello") << endl;  // 0
    cout << findSubstring("hello world", "world") << endl;  // 6
    cout << findSubstring("hello world", "abc") << endl;    // -1
    cout << findSubstring("hello world", "") << endl;       // 0
}