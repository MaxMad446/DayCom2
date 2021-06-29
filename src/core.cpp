// Auto-generated module | 2026-05-12T20:49:56.570432
#include <iostream>
#include <vector>

int compute_441() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
