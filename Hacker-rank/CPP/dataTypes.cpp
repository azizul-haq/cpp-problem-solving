//c++-tutorial-basic-data-types
#include <iostream>
using namespace std;

int main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		 int i;
    	long l;
    	char c;
    	float f;
    	double d;
    	scanf("%d %ld %c %f %lf" , &i, &l, &c, &f, &d);
    	printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", i,l,c,f,d);


		return 0;

}