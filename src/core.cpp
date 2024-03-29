// Auto-generated module | 2026-05-11T22:32:16.384513
#include <iostream>
#include <vector>

int compute_145() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_145() << std::endl;
    return 0;
}
