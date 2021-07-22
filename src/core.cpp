// Auto-generated module | 2026-05-12T20:51:40.925056
#include <iostream>
#include <vector>

int compute_688() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_688() << std::endl;
    return 0;
}
