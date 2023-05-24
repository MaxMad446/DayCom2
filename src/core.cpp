// Auto-generated module | 2026-05-11T21:51:45.133539
#include <iostream>
#include <vector>

int compute_951() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
