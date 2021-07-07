#include <iostream>
using namespace std;

int Height(int a, int b, int v) {
	int height = 0;
	int day = 0;
	
	if ((v - a) % (a - b) == 0) day = ((v - a) / (a - b));
	else day = (v - a) / (a - b) + 1;
	return day;
}

int main(void) {
	int a, b, v;
	cin >> a >> b >> v;

	cout << Height(a, b, v)+1;
}
			
