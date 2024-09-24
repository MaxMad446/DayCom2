// Auto-generated module | 2026-05-12T03:40:00.963337
#include <iostream>
#include <vector>

int compute_677() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_677() << std::endl;
    return 0;
}
