// codeforces: 4a watermelon 
#include <iostream>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int w;
		cin >> w;

		// if(w % 2 == 0 && w > 2)
		// {
		// 	cout << "YES" << endl;
		// }
		// else{
		// 	cout <<"NO" << endl;
		// }


		(w % 2 == 0 && w > 2)? cout <<"YES" : cout<<"NO";


	return 0;
}