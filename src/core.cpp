// Auto-generated module | 2026-05-11T20:01:09.684993
#include <iostream>
#include <vector>

int compute_520() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_520() << std::endl;
    return 0;
}
