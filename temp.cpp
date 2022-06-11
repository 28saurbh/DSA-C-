#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	// Your code here
	string str;
	cin >> str;

	transform(str.begin(), str.end(), str.begin(), ::tolower);

	if(str == "apple")
		cout<<"Gravity";
	else
		cout<<"Space";
	return 0;
}