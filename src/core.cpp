// Auto-generated module | 2026-05-12T20:00:05.124925
#include <iostream>
#include <vector>

int compute_796() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_796() << std::endl;
    return 0;
}
