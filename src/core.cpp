// Auto-generated module | 2026-05-11T19:59:00.660252
#include <iostream>
#include <vector>

int compute_256() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
