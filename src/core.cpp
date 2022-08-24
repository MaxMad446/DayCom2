// Auto-generated module | 2026-05-14T06:18:01.203583
#include <iostream>
#include <vector>

int compute_256() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
