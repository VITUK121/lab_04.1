#include <iostream>
using namespace std;
int main() {
	int k, N;
	double S = 0;
	cout << "N = ";
	cin >> N;
	k = N;
	//////////////////////////////////////////////////////////////////

	while (k != 20) {
		S += sqrt(pow(sin(k), 2) + pow(cos(N / k), 2));
		k++;
	}
	cout << "S = " << S << "\n\n";
	//////////////////////////////////////////////////////////////////

	S = 0;
	k = N;
	do {
		S += sqrt(pow(sin(k), 2) + pow(cos(N / k), 2));
		k++;
	} while (k != 20);
	cout << "S = " << S << "\n\n";
	/////////////////////////////////////////////////////////////////

	S = 0;
	for (int n = N; n != 20; n++) {
		S += sqrt(pow(sin(n), 2) + pow(cos(N / n), 2));
	}
	cout << "S = " << S << "\n\n";
	/////////////////////////////////////////////////////////////////

	S = 0;
	for (int n = 19; n != N-1; n--) {
		S += sqrt(pow(sin(n), 2) + pow(cos(N / n), 2));
	}
	cout << "S = " << S << "\n\n";
	/////////////////////////////////////////////////////////////////

	system("pause");
}