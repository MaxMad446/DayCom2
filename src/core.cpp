// Auto-generated module | 2026-05-13T21:00:37.669610
#include <iostream>
#include <vector>

int compute_788() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_788() << std::endl;
    return 0;
}
