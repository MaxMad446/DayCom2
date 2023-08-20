// Auto-generated module | 2026-05-11T22:03:04.901196
#include <iostream>
#include <vector>

int compute_205() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_205() << std::endl;
    return 0;
}
