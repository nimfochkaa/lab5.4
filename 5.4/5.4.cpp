#include <iostream>
#include <cmath>

using namespace std;

double S0(const int N) 
{
	double p = 1;
	for (int k = N; k <= 19; k++) {
		p *= (double)(k - N) / (k + N) + 1;
	}
	return p;
}

double S1(const int k, const int N)
{
	if (k < N) {
		return 1;
	}
	else {
		return ((double)(k - N) / (k + N) + 1) * S1(k - 1, N);
	}
}

double S2(const int k, const int N) 
{
	if (k > 19) {
		return 1;
	}
	else {
		return ((double)(k - N) / (k + N) + 1) * S2(k + 1, N);
	}
}
double S3(const int k, const int N, double t = 1) 
{
	t *= (double)(k - N) / (k + N) + 1;
	if (k <= N) {
		return t;
	}
	else {
		return S3(k - 1, N, t);
	}
}

double S4(const int k, const int N, double t = 1) {
	t *= (double)(k - N) / (k + N) + 1; 
	if (k >= 19) {
		return t;
	}
	else {
		return S4(k + 1, N, t);
	}
}

int main() {
	int N;
	cout << "N = ";
	cin >> N;

	cout << "(iter) S0 = " << S0(N) << endl;
	cout << "(rec up ++) S1 = " << S1(N, N) << endl;
	cout << "(rec up --) S2 = " << S2(N, N) << endl;
	cout << "(rec down ++) S3 = " << S3(19, N) << endl;
	cout << "(rec down --) S4 = " << S4(N, N) << endl;
	return 0;
}
