// Auto-generated module | 2026-05-11T20:10:00.158126
#include <iostream>
#include <vector>

int compute_664() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
