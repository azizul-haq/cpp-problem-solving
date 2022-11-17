//c++-tutorial-basic-input-output
#include <iostream>
using namespace std;

int main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    cout << a + b + c << endl;
    
  return 0;

}