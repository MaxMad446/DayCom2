// Auto-generated module | 2026-05-11T20:30:35.701098
#include <iostream>
#include <vector>

int compute_615() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
