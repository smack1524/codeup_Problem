#include <iostream>

using namespace std;

int main()
{
	float n;
	cin >> n ;
	//자리수 조절선언
	cout << fixed;
	//몇자리까지 조절할것인지
	cout.precision(6);
	cout << n << endl;
	return 0;
}