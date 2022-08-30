// Auto-generated module | 2026-05-14T06:18:27.508663
#include <iostream>
#include <vector>

int compute_587() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
