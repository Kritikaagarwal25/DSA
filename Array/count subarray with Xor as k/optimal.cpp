#include <bits/stdc++.h>
using namespace std;

int substringX0RwithK(vector<int> arr, int k) {
    int n = arr.size();
    int xrr = 0;
    int count = 0;
    unordered_map<int, int> mpp;

    mpp[xrr]++;

    for (int i = 0; i < n; i++) {
        xrr ^= arr[i];
        int x = xrr ^ k;
        count += mpp[x];
        mpp[xrr]++;
    }

    return count;
}

int main() {
    vector<int> arr = {4, 2, 2, 6, 4}; 
    int k = 6;
    int result = substringX0RwithK(arr, k);
    cout << result << endl;
    return 0;
}
