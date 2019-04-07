#include "pch.h"
#include <iostream>
#include <thread>
#include <iomanip>
#include "msoftcon.h"
using namespace std;



int main() {
	double count = 0.0;
	
	while (true) {
		system("cls");
		cout << fixed << setprecision(4) << count << endl;
		count += 0.0005;
		this_thread::sleep_for(chrono::milliseconds(1));
	}

	return 0;
}