// Auto-generated module | 2026-05-12T21:05:03.140803
#include <iostream>
#include <vector>

int compute_875() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_875() << std::endl;
    return 0;
}
