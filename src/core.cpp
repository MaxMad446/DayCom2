// Auto-generated module | 2026-05-11T21:28:40.697529
#include <iostream>
#include <vector>

int compute_909() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_909() << std::endl;
    return 0;
}
