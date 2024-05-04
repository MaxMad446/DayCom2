// Auto-generated module | 2026-05-11T22:36:56.199985
#include <iostream>
#include <vector>

int compute_488() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
