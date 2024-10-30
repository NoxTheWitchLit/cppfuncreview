#include <iostream>
using namespace std;

void drawBox();
void printName(string name);
void drawLine(int length);
int hoursToSeconds(int hours);
int findMax(int a, int b, int c);

int main() {
	drawBox();
	printName("Nox");
	drawLine(5);
	cout << hoursToSeconds(3) << endl;
	cout << findMax(7, 9, 3) << endl;
}


void drawBox() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

void printName(string name) {
	cout << "Hello, " << name << "." << endl;
}

void drawLine(int length) {
	for (int i = 0; i < length; i++) {
		cout << "-";
	}
	cout << endl;
}

int hoursToSeconds(int hours) {
	int seconds = hours*3600;
	return seconds;
}

int findMax(int a, int b, int c) {
	if (a > b and a > c) {
		return a;
	}
	else if (b > a and b > c) {
		return b;
	}
	else if (c > a and c > b) {
		return c;
	}
	else {
		return 0;
	}
}
