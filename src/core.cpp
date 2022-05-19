// Auto-generated module | 2026-05-11T21:03:14.347955
#include <iostream>
#include <vector>

int compute_939() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_939() << std::endl;
    return 0;
}
