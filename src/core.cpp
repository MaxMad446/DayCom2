// Auto-generated module | 2026-05-12T04:28:45.026210
#include <iostream>
#include <vector>

int compute_978() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_978() << std::endl;
    return 0;
}
