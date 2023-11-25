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
};
