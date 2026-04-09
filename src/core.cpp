// Auto-generated module | 2026-05-12T06:18:31.607693
#include <iostream>
#include <vector>

int compute_650() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
