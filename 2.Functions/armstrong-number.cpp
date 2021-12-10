#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int temp =n;
    while (n>0)
    {
        int las = n%10;
        sum = sum + las*las*las;
        n=n/10;
    }
    if(temp == sum){
        cout << "Armstrong number";
    }
    else{
        cout << "Non Armstrong";
    }

    return 0;
}