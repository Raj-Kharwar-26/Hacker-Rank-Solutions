#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>arr;
    for (int i=0; i<n; i++) {
    int a;
    cin>>a;
    arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    for (int i=0; i<arr.size(); i++) {
    cout<<arr[i]<<" ";
    }

    return 0;
}
