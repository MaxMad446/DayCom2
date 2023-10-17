// Auto-generated module | 2026-05-11T22:10:44.584137
#include <iostream>
#include <vector>

int compute_922() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_922() << std::endl;
    return 0;
}
