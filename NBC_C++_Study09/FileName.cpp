#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

template <typename T>
class simpleVector {
private:
	T* arr;
	int size;
	int capacity;
public:
	simpleVector() {
		capacity = 10;
		size = 0;
		arr = new T[capacity];
	};
	simpleVector(int cap) {
		capacity = cap;
		size = 0;
		arr = new T[capacity];
	};
	~simpleVector() {
		delete[] arr;
	}

	void push_back(T value) {
		if (size < capacity) {
			arr[size] = value;
			size++;
		}
		else {
			capacity += 5;
			T* newArr = new T[capacity];
			for (int i = 0;i < size;i++) {
				newArr[i] = arr[i];
			}
			delete[] arr;
			arr = newArr;
		}
	};
	void pop_back() {
		if (size > 0) {
			size--;
		}
	};
	void Vsize() {
		cout << size << endl;
	};
	void Vcapacity() {
		cout << capacity << endl;
	};
	void resize(int a) {
		if (a > size) {
			capacity = a;
			T* newArr = new T[capacity];
			for (int i = 0;i < size;i++) {
				newArr[i] = arr[i];
			}
			delete[] arr;
			arr = newArr;
		}
	};
	 void Vsort() {
		sort(arr, arr + size);
	}
	 void print() {
		 for (int i = 0;i < size;i++) {
			 cout << arr[i] << " ";
		 }
		 cout << endl;
	 }
};

int main() {
	simpleVector<int> a;
	a.print();
	a.push_back(1);
	a.push_back(2);
	a.push_back(4);
	a.push_back(12);
	a.print();
	a.pop_back();
	a.pop_back();
	a.print();
	a.push_back(25);
	a.push_back(62);
	a.push_back(32);
	a.push_back(6);
	a.push_back(9);
	a.print();
	a.Vsort();
	a.print();
	a.Vsize();
	a.Vcapacity();
	a.resize(12);
	a.Vsize();
	a.Vcapacity();
	a.push_back(25);
	a.push_back(62);
	a.push_back(32);
	a.push_back(6);
	a.push_back(9);
	a.Vsize();
	a.Vcapacity();

}