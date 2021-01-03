#include<iostream>
#include<conio.h>
#include<fstream>

using namespace std;
int main() {
	
	ofstream file;
	ifstream fil;
	file.open("series.txt");
	if (!file) {
		cout << "Not found this file";
	}

	for (int i = 1; 1 <= 5000; i++) {
		if (i % 2 == 0) {
			file << i;
		}
	}
	int n, n1;
	while (fil >> n >> n1) {
		cout<< n1 << " ";
	}
	file.close();
	fil.close();
		_getch();
}

