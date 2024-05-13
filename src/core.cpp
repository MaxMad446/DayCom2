// Auto-generated module | 2026-05-11T22:38:12.046901
#include <iostream>
#include <vector>

int compute_709() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_709() << std::endl;
    return 0;
}
