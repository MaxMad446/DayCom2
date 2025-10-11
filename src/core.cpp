// Auto-generated module | 2026-05-12T04:30:18.955514
#include <iostream>
#include <vector>

int compute_861() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
