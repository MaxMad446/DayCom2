// Auto-generated module | 2026-05-13T20:56:32.163991
#include <iostream>
#include <vector>

int compute_456() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
