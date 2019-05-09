#include <iostream>
#include <algorithm> // sort
#include <cmath> // sqrt
#include <vector>
#include <map>

using namespace std;

// Ham kiem tra so nguyen to.
bool isPrime(int value)
{
	if (value < 2) return 0;
	
	for (int i = 2; i <= sqrt(value); ++i)
		if (!(value % i))
			return 0;
			
	return 1;
}

int main()
{
	int size;
	cout << "Nhap n: "; cin >> size;
	
	int *arr = new int[size];
	
	// 1. Nhap N so nguyen.
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
	
	// 4. Hien thi day tang dan.
	vector<int> sorted(arr, arr + size);
	
	sort(sorted.begin(), sorted.end());
	
	cout << "4. Day tang dan:";
	for (vector<int>::iterator it = sorted.begin(); it != sorted.end(); ++it)
		cout << ' ' << *it;
		
	cout << '\n';
	
	// 5. Hien thi 3 so nho nhat cua day.
	cout << "5. 3 so nho nhat: ";
	
	for (int i = 0; i < 3; ++i)
		cout << sorted[i] << (i != 2 ? ' ' : '\n');
	
	// 6. Tinh tong cac so nguyen to.
	int sumPrime = 0;
	
	for (int i = 0; i < size; ++i)
		if (isPrime(arr[i]))
			sumPrime += arr[i];
			
	cout << "6. Tong cac so nguyen to = " << sumPrime << '\n';
	
	// 7. Xoa cac phan tu giong nhau trong mang.
	map<int, bool> removed;
	
	for (int i = 0; i < size; ++i)
		removed[arr[i]] = 1;
		
	cout << "7. Xoa cac phan tu giong nhau:";
		
	for (map<int, bool>::iterator it = removed.begin(); it != removed.end(); ++it)
		if (it->second == 1)
			cout << ' ' << it->first;
			
	cout << '\n';
	
	delete[] arr;
	
	return 0;
}
