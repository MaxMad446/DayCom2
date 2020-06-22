// Auto-generated module | 2026-05-11T19:32:14.639121
#include <iostream>
#include <vector>

int compute_222() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
