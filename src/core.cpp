// Auto-generated module | 2026-05-11T21:32:00.086989
#include <iostream>
#include <vector>

int compute_703() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
