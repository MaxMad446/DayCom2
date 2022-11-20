// Auto-generated module | 2026-05-14T06:25:17.134342
#include <iostream>
#include <vector>

int compute_401() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_401() << std::endl;
    return 0;
}
