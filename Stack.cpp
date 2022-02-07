#include <iostream>
#include <vector>

using namespace std;

bool isEmpty(vector<int>stack) {
    if (stack.size() == 0) {
        return true;
    }
    return false;
}

bool isFull(vector<int>stack, int max) {
    if (stack.size() == max) {
        return true;
    }
    return false;
}

int Top (vector<int>stack) {
    if (isEmpty(stack)) {
        return NULL;
    }
    return stack.at(0);
}

int main() {
    // MAX
    int max = 100;
    // Initialize
    vector<int>stack;
    // Return TOP element without remove
    stack.push_back(5);
    stack.push_back(2);

    cout << Top(stack);

}