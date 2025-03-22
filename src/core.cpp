// Auto-generated module | 2026-05-12T21:14:50.113258
#include <iostream>
#include <vector>

int compute_150() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_150() << std::endl;
    return 0;
}
