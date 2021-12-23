// Auto-generated module | 2026-05-11T20:44:08.207145
#include <iostream>
#include <vector>

int compute_944() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
