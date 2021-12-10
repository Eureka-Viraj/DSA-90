#include<iostream>
#include<cmath>
using namespace std;

bool chek(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
        break;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if(chek(n)){
        cout << " Yes ";
    }
    else{
        cout << "No";
    }

    return 0;
}