#include<iostream>
class Array {
	int size;
	int* ptr;
public:
	Array(int size) : size(size) {
		 ptr = new int[size];

	}
	~Array() {
		delete[] ptr;
	}
	int getSize() const {
		return size;
	}
};
int main() {
	Array arr(5);
	std::cout << "Size of the array: " << arr.getSize() << std::endl;
	return 0;
}