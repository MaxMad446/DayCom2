// Auto-generated module | 2026-05-11T21:17:45.927441
#include <iostream>
#include <vector>

int compute_631() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
