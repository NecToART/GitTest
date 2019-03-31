#include <iostream>

using namespace std;

extern int f1(int a,int b);

extern int f2(int a,int b);

int main(){


	int i,k,sum,raz;

	cin >> i;
	cin >> k;


	sum = f1(i,k);
	raz = f2(i,k);

	cout << "sum = " << sum << endl;
	cout << "ruz = " << raz << endl;


	cout << "Hello world!" << endl;

	return 0;
}


