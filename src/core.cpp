// Auto-generated module | 2026-05-12T04:16:14.404019
#include <iostream>
#include <vector>

int compute_871() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
