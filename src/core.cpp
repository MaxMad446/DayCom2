// Auto-generated module | 2026-05-11T22:03:43.268570
#include <iostream>
#include <vector>

int compute_643() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_643() << std::endl;
    return 0;
}
