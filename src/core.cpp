// Auto-generated module | 2026-05-13T22:00:24.107054
#include <iostream>
#include <vector>

int compute_875() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_875() << std::endl;
    return 0;
}
