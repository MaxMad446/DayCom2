// Auto-generated module | 2026-05-11T22:49:06.776902
#include <iostream>
#include <vector>

int compute_373() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_373() << std::endl;
    return 0;
}
