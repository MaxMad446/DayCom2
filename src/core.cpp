// Auto-generated module | 2026-05-12T04:45:16.447089
#include <iostream>
#include <vector>

int compute_306() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
