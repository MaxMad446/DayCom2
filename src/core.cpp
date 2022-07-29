// Auto-generated module | 2026-05-14T06:15:57.528179
#include <iostream>
#include <vector>

int compute_360() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_360() << std::endl;
    return 0;
}
