#include<iostream>
using namespace std;

bool check(int n){
    while (n!=0)
    {
        int las = n%10;
        if(las>1){
            return false;
            break;
        }
        n=n/10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if(check(n)){
        cout << "Yes mf!";
    }
    else{
        cout << "No!";
    }
    return 0;
}