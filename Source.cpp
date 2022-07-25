#include <bits/stdc++.h>
using namespace std;
int main()

{
	int x;
	string a;
	cin >> x;
	while (x--)
	{
		cin >> a;
		if (a=="YES"||a=="yES"||a=="yes"||a=="Yes"||a=="YeS"||a=="YEs"||a=="yEs"||a=="yeS")
			cout << "YES"<<endl;
		else
		{
			cout << "NO"<<endl;
		}
	}

	return 0;
}
