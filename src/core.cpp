// Auto-generated module | 2026-05-12T03:43:20.937577
#include <iostream>
#include <vector>

int compute_555() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_555() << std::endl;
    return 0;
}
