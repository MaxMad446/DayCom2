// Auto-generated module | 2026-05-11T21:59:48.574458
#include <iostream>
#include <vector>

int compute_613() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_613() << std::endl;
    return 0;
}
