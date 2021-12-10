#include<iostream>
#include<climits>
using namespace std;

int ch(int n){
    return 1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for(int i=0; i<n; i++){
        maxNo = max(arr[i], maxNo);
        minNo = min(arr[i],minNo);
    }
    cout << maxNo << endl;
    cout << minNo << endl;
    return 0;
}