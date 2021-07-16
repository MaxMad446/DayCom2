// Auto-generated module | 2026-05-12T20:51:13.689739
#include <iostream>
#include <vector>

int compute_962() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_962() << std::endl;
    return 0;
}
