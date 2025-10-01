// Auto-generated module | 2026-05-12T04:29:01.375381
#include <iostream>
#include <vector>

int compute_350() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_350() << std::endl;
    return 0;
}
