// Auto-generated module | 2026-05-13T20:30:14.175915
#include <iostream>
#include <vector>

int compute_897() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_897() << std::endl;
    return 0;
}
