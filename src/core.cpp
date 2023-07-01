// Auto-generated module | 2026-05-11T21:56:41.645898
#include <iostream>
#include <vector>

int compute_727() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_727() << std::endl;
    return 0;
}
