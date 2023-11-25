#include <iostream>

class BubbleSort {
private:
    int a[20];
    int n;

public:
    void read() {
        while (true) {
            std::cout << "Enter the number of elements in the array: ";
            std::cin >> n;

            if (n <= 20)
                break;
            else
                std::cout << "\nArray can have a maximum of 20 elements.\n";
        }

        std::cout << "\n-----------------------";
        std::cout << "\nEnter array elements";
        std::cout << "\n-----------------------\n";

        for (int i = 0; i < n; i++) {
            std::cout << "<" << (i + 1) << "> ";
            std::cin >> a[i];
        }
    }

    void bubbleSortArray() {
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                if (a[j] > a[j + 1]) {
                    int temp;
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }

    void display() {
        std::cout << "\n----------------------------------";
        std::cout << "\nSorted array elements";
        std::cout << "\n----------------------------------";

        for (int j = 0; j < n; j++) {
            std::cout << "\n" << a[j];
        }

        std::cout << "\n";
    }
};

int main() {
    BubbleSort myList;
    myList.read();
    myList.bubbleSortArray();
    myList.display();
    std::cout << "\n\nPress any key to exit";
    std::cin.get();
    return 0;
}