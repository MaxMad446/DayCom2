// Auto-generated module | 2026-05-11T22:11:48.119463
#include <iostream>
#include <vector>

int compute_519() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_519() << std::endl;
    return 0;
}
