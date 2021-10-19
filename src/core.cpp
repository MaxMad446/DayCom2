// Auto-generated module | 2026-05-12T20:59:25.931086
#include <iostream>
#include <vector>

int compute_223() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_223() << std::endl;
    return 0;
}
