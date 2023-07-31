// Auto-generated module | 2026-05-13T20:51:07.813050
#include <iostream>
#include <vector>

int compute_120() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
