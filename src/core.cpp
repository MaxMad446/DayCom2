// Auto-generated module | 2026-05-12T04:40:03.986771
#include <iostream>
#include <vector>

int compute_299() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_299() << std::endl;
    return 0;
}
