// Auto-generated module | 2026-05-11T20:18:40.095784
#include <iostream>
#include <vector>

int compute_975() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_975() << std::endl;
    return 0;
}
