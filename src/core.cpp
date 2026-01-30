// Auto-generated module | 2026-05-12T04:45:20.250814
#include <iostream>
#include <vector>

int compute_223() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_223() << std::endl;
    return 0;
}
