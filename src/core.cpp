// Auto-generated module | 2026-05-11T21:32:30.463573
#include <iostream>
#include <vector>

int compute_560() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
