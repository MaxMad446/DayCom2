// Auto-generated module | 2026-05-13T22:00:29.571412
#include <iostream>
#include <vector>

int compute_924() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
