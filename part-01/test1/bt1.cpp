#include <iostream>

using namespace std;

int main()
{
	int size;
	cout << "Nhap n: "; cin >> size;
	
	int *arr = new int[size];
	
	// 1. Nhap N so nguyen..
	for (int i = 0; i < size; ++i)
		cin >> arr[i];
	
	cout << '\n';
	for (int i = 0; i < size; ++i)
		cout << arr[i] << (i != size - 1 ? ' ' : '\n');
		
	// 2. Tim max, min, vi tri max, vi tri min.
	int max = arr[0], min = arr[0];
	int viTriMax = 1, viTriMin = 1;
	
	for (int i = 0; i < size; ++i) {
		
		if (max < arr[i]) {
			max = arr[i];
			viTriMax = i + 1;
		}
		
		if (min > arr[i]) {
			min = arr[i];
			viTriMin = i + 1;
		}
	}
	
	cout << "2. Max = " << max << '\n';
	cout << "   Vi tri max = " << viTriMax << '\n';
	cout << "   Min = " << min << '\n';
	cout << "   Vi tri Min = " << viTriMin << '\n';
	
	// 3. Tinh tong, tong cac so am, TBC cac so chan.
	int sum = 0, sumNeg = 0;
	double sumEven = 0, countEven = 0;
	
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
		
		if (arr[i] < 0) sumNeg += arr[i];
		
		if (!(arr[i] & 1)) {
			sumEven += arr[i];
			++countEven;
		}
	}
		
	cout << "3. Tong = " << sum << '\n';
	cout << "   Tong cac so am = " << sumNeg << '\n';
	cout << "   TBC cac so chan = " << sumEven / countEven << '\n';
	
	
	return 0;
}
