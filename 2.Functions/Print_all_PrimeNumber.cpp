#include<iostream>
#include<cmath>

using namespace std;

bool check(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
            break;
        } 
    }
    return true;
}

int main()
{
    int a,b;
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        if(check(i)){
            cout << i << " ";
        }
    }
    return 0;
}