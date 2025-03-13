#include <iostream>
using namespace std;
int a[15];		
int n;			

void input() {		
	while (true) {	
		cout << "Masukan banyaknya elemen pada array : "; 
		cin >> n;	
		if (n <= 15)	
			break;	
		else {		
			cout << "\nArray dapat mempunyai maksimal 15 elemen. \n"; 
		}
	}
	cout << endl;	
	cout << "====================" << endl; 
	cout << "Masukan Data" << endl; 
	cout << "====================" << endl; 

	for (int i = 0; i < n; i++) { 
		cout << "Data ke-" << (i + 1) << ": ";	
		cin >> a[i];		
	}
}

void BubbleSortArray() {		
	for (int i = 1; i < n; i++) {		
		for (int j = 0; j < n - i; j++) {		
			if (a[j] > a[j + 1]) {		
				int temp = a[j];		
				a[j] = a[j + 1];		
				a[j + 1] = temp;		
			}
		}
	}
}

void display() {		
	cout << endl;		
	cout << "=================================" << endl;		
	cout << "Data Setelah Dirutkan" << endl;		
	cout << "=================================" << endl;		
	for (int j = 0; j < n; j++) {		
		cout << a[j] << endl;		
	}
	cout << endl;		
}

int main() {		
	input();		
	BubbleSortArray();		
	display();
	return 0;
}