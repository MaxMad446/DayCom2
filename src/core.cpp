// Auto-generated module | 2026-05-11T21:46:23.342184
#include <iostream>
#include <vector>

int compute_470() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
