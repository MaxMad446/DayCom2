// Auto-generated module | 2026-05-11T19:32:22.028572
#include <iostream>
#include <vector>

int compute_643() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_643() << std::endl;
    return 0;
}
