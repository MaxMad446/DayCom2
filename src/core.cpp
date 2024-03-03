// Auto-generated module | 2026-05-11T22:28:56.902799
#include <iostream>
#include <vector>

int compute_413() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
