#include <iostream>
using namespace std;
#include<string.h> 
int main(void) {
	//Anton and Danik Friendship
	int size = 0, ant = 0, dan = 0; cin >> size;
	string charc;
	cin >> charc;
	for (int i = 0; i < size; i++) {
		if (charc[i] == 'A') {
			ant++;
		}
		else dan++;
	}
	if (ant > dan) {
		cout << "Anton";
	}
	else if (dan > ant) { cout << "Danik"; }
	else  cout << "Friendship";
}