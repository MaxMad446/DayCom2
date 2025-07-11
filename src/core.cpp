// Auto-generated module | 2026-05-12T04:17:55.431364
#include <iostream>
#include <vector>

int compute_587() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
