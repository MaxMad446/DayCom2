// Auto-generated module | 2026-05-12T20:45:24.295887
#include <iostream>
#include <vector>

int compute_889() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
