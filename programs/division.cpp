#include <bits/stdc++.h> 
string findDivision(int x, int y, int n) {
	// Write your code here.
	if (y == 0){
		return 0;
	}

	bool isnegative = (x < 0) ^ (y < 0 );

	x = abs(x);
	y = abs(y);

	int integer = x/y;
	int rem = x%y;

	string result = to_string(integer);

	if(n>0){
		result += ".";
for(int i=0; i<n; i++){
	rem *= 10;
	result += to_string(rem/y);
	rem %= y;
}

if(isnegative){
	result = "-" + result;
}

	}
	return result;
}
