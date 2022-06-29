// Auto-generated module | 2026-05-11T21:08:45.980842
#include <iostream>
#include <vector>

int compute_750() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
