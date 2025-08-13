// Auto-generated module | 2026-05-12T04:22:20.341705
#include <iostream>
#include <vector>

int compute_936() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
