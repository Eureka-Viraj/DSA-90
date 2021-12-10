#include<iostream>
using namespace std;

void tow(int n, char a,char b, char c){
	if(n==1){
		cout << "Move disk 1 from rod "<<a << " to rod " << b << endl;
		return;
	}
	tow(n-1, a,c,b);
		cout << "Move disk " << n << " from rod " << a << " to rod " << b << endl;
	tow(n-1, c,b,a);

	return;
}

int main()
{
	int n;
	
	cin >> n;
	tow(n,'A', 'B', 'C');
	return 0;
}