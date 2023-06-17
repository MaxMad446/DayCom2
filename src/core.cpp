// Auto-generated module | 2026-05-11T21:54:55.705651
#include <iostream>
#include <vector>

int compute_145() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_145() << std::endl;
    return 0;
}
